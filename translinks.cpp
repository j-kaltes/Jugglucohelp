#include <stdio.h>
#include <string_view>
#include <ctype.h>
#include <string.h>
#include <algorithm>
#define NOLOGS_H 1
#include "inout.hpp"
/*
<script type="module" >
import { setlang } from "https://www.juggluco.nl/Jugglucohelp/code/settrans.js";
let translations=[
"be", "de", "es", "fr", "nl", "pl", "pt", "ru", "uk", "zh",
];
setlang(translations,"libreview.html");
</script> */
void langlist(FILE*fp,char **names,int len,const char *filename) {
 fprintf(fp,R"(<script type="module" >
import { setlang } from "https://www.juggluco.nl/Jugglucohelp/code/settrans.js";
let translations=[)");
    for(int i=0;i<len;i++) { 
        fprintf(fp,R"("%.02s", )",names[i]);
        }
    fprintf(fp,R"(];
setlang(translations,"%s");
</script>)",filename);
      }
void mklinks(FILE *fp,char **names,int len,const char *filename) {
    fprintf(fp,R"(<p>)");
    for(int i=0;i<len;i++) { 
        fprintf(fp,R"(<a href="https://www.juggluco.nl/Jugglucohelp/%.02s/%s">%.02s</a>&emsp;&emsp;)",names[i],filename,names[i]);
        }
    fprintf(fp,R"(<a href="https://www.juggluco.nl/Jugglucohelp/%s?lang=en">en</a>&emsp;&emsp;</p>)",filename);
     }

template <class T, std::size_t N>
int includingstring(const T (&findstr)[N], const char *input, int len) {
auto comp=[](const char one,const char two)->bool {return tolower(one)==tolower(two);};
const char *endinput=input+len;
const char *found=std::search(input,endinput,findstr,findstr+N-1,comp);
if(found==endinput)  {
	fprintf(stderr,"%s not found\n",findstr);
	return -1;
	}
const char *start=std::find(found,endinput,'>');
if(start==endinput) {
  fprintf(stderr,"> not found\n");
	return -2;
	}
return start-input+1;
}

int patchfile(const char *fullname,const char *filename,char **names,int nr,bool addscript) {
    int orlen=strlen(fullname);
    std::string_view suffix=".nolangs";
    char bak[100];
    memcpy(bak,fullname,orlen);
    memcpy(bak+orlen,suffix.data(),suffix.size()+1);
    rename(fullname,bak);
    Readall file(bak);
    if(!file.data()) {
        perror(bak);
        return -1;
        }
    char *input=file.data();
    FILE *outfile=fopen(fullname,"w");
    if(!outfile) {
        perror(fullname);
        return -2;
        }
    int htmlpos;
    if(addscript) {
        htmlpos=includingstring(R"(<html)",input,file.size());
        if(fwrite(input,htmlpos,1,outfile)!=1) {
            perror("fwrite 2");
            return -4;
            }
        langlist(outfile,names,nr,filename);
        }
    else {
        htmlpos=0;
        }
    int bodypos=includingstring(R"(<body)",input+htmlpos,file.size()-htmlpos);
    if(bodypos<0) {
        return -3;
        }
    if(fwrite(input+htmlpos,bodypos,1,outfile)!=1) {
        perror("fwrite 3");
        return -5;
        }
    mklinks(outfile,names,nr,filename);
    int endlen=file.size()-bodypos-htmlpos;
    if(fwrite(input+bodypos+htmlpos,endlen,1,outfile)!=1) {
        perror("fwrite 4");
        return -6;
        }
     return 0;
    }
int main(int argc,char **argv) {
    char **names=argv+1;
    int nr=argc-1;
    if(nr) {
        for(int i=0;i<nr;++i) {
            const char *fullname=names[i];
            const char *filename=fullname+3;
            patchfile(fullname,filename,names,nr,false);
            }

        const char *filename=names[0]+3;
        patchfile(filename,filename,names,nr,true);
        }
    }
