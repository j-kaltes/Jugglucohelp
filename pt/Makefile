#FILES=introhelp.html	getlib.html  garminconfig.html	flashpermission.html  addconnection.html  about.html
#FILES=about.html addconnection.html flashpermission.html garminconfig.html getlib.html introhelp.html labelhelp.html librenumhelp.html locationpermission.html mealhelp.html nearbypermission.html newlabelhelp.html reminders.html setlibrenumtype.html

include files.mk

all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml
#html.xml:ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html watchhelp.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html
html.xml: $(FILES)
	 ../html2xml  $^ > $@

install: html.xml
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-pt
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-pt

pthelptexts.zip: ${FILES}
	 zip  $@ $^ 



files:
	echo ${FILES}
file:
	echo `ls -t ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html watchhelp.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html`

dep:
	sh mkfiles.sh > files.mk

zip: pthelptexts.zip

#pthelptexts.zip: ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html watchhelp.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html
#	 zip  $@ $^ 
