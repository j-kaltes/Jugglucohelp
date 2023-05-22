#include <string_view>
#include <iostream>
#include <algorithm>
using namespace std;
#include "inout.h"
void rewritefile(const char *name) {
Readall cont(name);
if(!cont.data()) {
	cerr<<name<<" n\'existe pas\n";
	return;
	}
const char find[]=R"(<body)";
auto comp=[](const char one,const char two)->bool {return tolower(one)==tolower(two);};
const char *found=std::search(cont.begin(),cont.end(),begin(find),end(find)-1,comp);
if(found==cont.end())  {
	cerr<<name<<": "<<find<<" non trouvé"<<endl;
	return;
	}
const char *start=std::find(found,cont.end(),'>');
if(start==cont.end()) {
	cerr<<name<<": "<<"> non trouvé\n";
	return;
	}

start++;

const char findend[]="</body>";
const char *foundend=std::search(start,cont.end(),begin(findend),end(findend)-1,comp);
if(foundend==cont.end()) {
	cerr<<name<<": "<<findend<<" non trouvé\n";
	return;
	}
const char *iter=start;
string_view label(name);
const char strbegin[]=R"(<string name=")";
const char cdata[]=R"(" >
<![CDATA[
)";
const char cend[]=R"(]]>
</string>
)";

write(STDOUT_FILENO,strbegin,sizeof(strbegin)-1);
write(STDOUT_FILENO,label.data(),label.size()-5);
write(STDOUT_FILENO,cdata,sizeof(cdata)-1);
while(true){
//	const char *teken=std::find(iter,foundend,'\'');
	const char zoek[]= "\\\'";
	const char *teken=std::find_first_of(iter,foundend,begin(zoek),end(zoek));
	write(STDOUT_FILENO,iter,teken-iter);
	if(teken==foundend)  {
		write(STDOUT_FILENO,cend,sizeof(cend)-1);
		return;
		}
	char teek[3]=R"(\)";
	teek[1]=*teken;
	write(STDOUT_FILENO,teek,2);
	iter=teken+1;
	}
}



int main(int argc,char **argv) {

const string_view resstart("<resources>\n");
write(STDOUT_FILENO,resstart.data(),resstart.size());
for(int i=1;i<argc;i++)
	rewritefile(argv[i]);
const string_view resend("</resources>\n");
write(STDOUT_FILENO,resend.data(),resend.size());
}
