all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml
FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html watchhelp.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html floatingconfig.html getaccountidhelp.html Nightscouthelp.html

html.xml:${FILES}
	 ../html2xml  $^ > $@

install: html.xml
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-de
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-de

dehelptexts.zip:${FILES}


	 zip  $@ $^ 
