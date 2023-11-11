all: html.xml
html2xml: html2xml.cpp
	 g++ -I/home/jka/src/android/Glucodata/Common/src/main/cpp/ -I/home/jka/src/android/Glucodata/Common/src/main/cpp/share -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml


FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html nightnumhelp.html helpexport.html

#html.xml:ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html 
html.xml: ${FILES}
	 ./html2xml  $^ > $@

install: html.xml
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values

helptexts.zip: ${FILES}
	 zip  $@ $^ 

files:
	@echo ${FILES}

help: helptexts.zip 
	make -C de dehelptexts.zip 
	make -C nl nlhelptexts.zip 
	make -C it ithelptexts.zip 
	make -C pt pthelptexts.zip 
	cp helptexts.zip pt/pthelptexts.zip de/dehelptexts.zip nl/nlhelptexts.zip it/ithelptexts.zip /home/jka/html/j-kaltes.github.io/Juggluco/translation


	
