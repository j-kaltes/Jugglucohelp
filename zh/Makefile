JUGGLUCOPATH=/Users/pangwei/AndroidStudioProjects/Juggluco
#JUGGLUCOPATH=/home/jka/src/android/Glucodata/
all: html.xml
html2xml: html2xml.cpp
	 g++ -I${JUGGLUCOPATH}/Common/src/main/cpp -I${JUGGLUCOPATH}/Common/src/main/cpp/share -g -std=c++20 $^ -o $@

#	g++ -g -std=c++20 html2xml.cpp -o html2xml

#FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html
#FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html

#FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html nightnumhelp.html

#FILES=NightPost.html Nightscouthelp.html about.html addconnection.html alarmhelp.html battery.html colorhelp.html connectionoverview.html disturbhelp.html flashpermission.html floatingconfig.html garminconfig.html getaccountidhelp.html getlib.html introhelp.html labelhelp.html librenumhelp.html libreview.html locationpermission.html mealhelp.html nearbypermission.html newlabelhelp.html nightnumhelp.html notificationpermission.html nutrients.html reminders.html ringtone.html searchhelp.html sensorhelp.html sensorpermission.html setlibrenumtype.html settinghelp.html shortcuthelp.html stathelp.html staticnum.html talkhelp.html kerfstok.html watchinfo.html wearosinfo.html

FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html nightnumhelp.html helpexport.html newamount.html healthpermission.html IOB.html changestart.html
html.xml: Makefile html2xml ${FILES} 
	 ./html2xml ${FILES} > $@

install: html.xml
	mkdir -p ${JUGGLUCOPATH}/Common/src/mobile/res/values-zh
	cp html.xml ${JUGGLUCOPATH}/Common/src/mobile/res/values-zh

zhhelptexts.zip:${FILES}
	 zip  $@ $^ 
