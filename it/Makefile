all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml
html.xml:ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html
	 ./html2xml  $^ > $@


WEARFILES=locationpermission.in.html nearbypermission.in.html 
wearhtml.xml:${WEARFILES} 
	 ../html2xml -i  $^ > $@
install: html.xml wearhtml.xml
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-it
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-it
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/wear/res/values-it
	cp wearhtml.xml  /o/home/jka/src/android/Glucodata/Common/src/wear/res/values-it/html.xml




ithelptexts.zip: ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html  
	 zip  $@ $^ 



