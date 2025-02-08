var unitstr='mg/dL';
function getunitarg(){ 
	const params = new URLSearchParams(document.location.search);
	const unit = params.get("unit");
	if(unit===null)	 {
		return 0;
		}
	if(unit == "mg/dL") { 
		return 2;
		} 
	else { 
		if(unit=="mmol/L") {
		   return 1;
		   }
	 	}

	return 0;
    } 
let mmol=[
"AM",
"AU",
"BA",
"BG",
"BW",
"BY",
"CA",
"CH",
"CN",
"CZ",
"DK",
"EE",
"FI",
"GB",
"HK",
"HR",
"HU",
"IE",
"IS",
"KW",
"KZ",
"LT",
"LV",
"MT",
"MY",
"NA",
"NL",
"NO",
"NZ",
"RS",
"RU",
"SE",
"SI",
"SK",
"UA",
"ZA"];






function getunit() {
	var unit=getunitarg();
	if(unit!=0) {
		return unit;
		}

	var userLang = navigator.language || navigator.userLanguage;
	var  co=userLang.toUpperCase();

	for(const element of mmol) {
	  if(co.includes(element)) {
		return 1;
		}
	   }

	return 2;
	 }



function setbaseurl(){ 
	if(getunit()!=1) {
		document.getElementById("baseurl").href = "https://www.juggluco.nl/Jugglucohelp/mgdL/"; 
		unitstr='mg/dL';
		} 
	else { 
	       document.getElementById("baseurl").href = "https://www.juggluco.nl/Jugglucohelp/";  
		unitstr='mmol/L';
		}
   	} 
setbaseurl();
