
function getlangarg(){ 
	const params = new URLSearchParams(document.location.search);
	const lang = params.get("lang");
	if(lang===null)	 {
		return "";
		}
    return lang;
    } 
let browsLang=getlangarg();
if(browsLang.length != 2)  {
    let LangCountry = navigator.language || navigator.userLanguage;
    browsLang=LangCountry.substring(0,2);
    }
function hastrans(trans) {
    for(const element of trans) {
          if(browsLang.includes(element)) {
              return 1;
              }
        }
     return 0;
     }
export function setlang(trans,page) {
    if(hastrans(trans)==1) {
         window.location = "https://www.juggluco.nl/Jugglucohelp/"+browsLang+"/"+page;
         }
     }

