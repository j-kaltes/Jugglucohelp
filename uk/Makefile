all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml
#FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html


FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html nightnumhelp.html helpexport.html newamount.html healthpermission.html IOBhelp.html  changestart.html camerapermission.html exchangehelp.html displayhelp.html loghelp.html sensormirror.html QRmirror.html advancedAlarmshelp.html schedulehelp.html calibrationslist.html calibrationhelp.html GlucoseMeter.html GlucoseMeterList.html DeviceList.html turnservers.html autoqrmessage.html sensorinfo.html SibionicsServer.html gs3number.html themes.html
html.xml:${FILES}
	 ../html2xml  $^ > $@


WEARFILES=staticnum.in.html locationpermission.in.html nearbypermission.in.html notificationpermission.in.html 
wearhtml.xml:${WEARFILES} 
	 ../html2xml -i $^ > $@
install: html.xml wearhtml.xml
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-uk
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-uk
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/wear/res/values-uk
	cp wearhtml.xml  /o/home/jka/src/android/Glucodata/Common/src/wear/res/values-uk/html.xml
dehelptexts.zip:${FILES}


	 zip  $@ $^ 
