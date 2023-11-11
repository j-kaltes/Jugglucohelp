all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml
html.xml:ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html
	 ./html2xml  $^ > $@

install: html.xml
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-it

ithelptexts.zip: ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html  
	 zip  $@ $^ 
