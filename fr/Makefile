all: html.xml
html2xml: html2xml.cpp
	 g++ -I/home/jka/src/android/Glucodata/Common/src/main/cpp/ -I/home/jka/src/android/Glucodata/Common/src/main/cpp/share -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml


FILES=ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html  floatingconfig.html getaccountidhelp.html Nightscouthelp.html NightPost.html notificationpermission.html staticnum.html talkhelp.html webpageshelp.html

#html.xml:ringtone.html reminders.html connectionoverview.html addconnection.html locationpermission.html introhelp.html searchhelp.html shortcuthelp.html labelhelp.html settinghelp.html sensorhelp.html kerfstok.html   getlib.html newlabelhelp.html battery.html nutrients.html mealhelp.html colorhelp.html stathelp.html alarmhelp.html flashpermission.html nearbypermission.html watchinfo.html wearosinfo.html about.html disturbhelp.html libreview.html garminconfig.html librenumhelp.html setlibrenumtype.html 
html.xml:${FILES}
	 ../html2xml  $^ > $@


WEARFILES=staticnum.in.html locationpermission.in.html nearbypermission.in.html notificationpermission.in.html 
wearhtml.xml:${WEARFILES} 
	 ../html2xml -i $^ > $@
install: html.xml wearhtml.xml
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-fr
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-fr
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/wear/res/values-fr
	cp wearhtml.xml  /o/home/jka/src/android/Glucodata/Common/src/wear/res/values-fr/html.xml


helptexts.zip: ${FILES}
	 zip  $@ $^ 

files:
	@echo ${FILES}

help: helptexts.zip 
	make -C de dehelptexts.zip 
	make -C nl nlhelptexts.zip 
	make -C it ithelptexts.zip 
	make -C pt pthelptexts.zip
	make -C fr frhelptexts.zip 
	cp helptexts.zip pt/pthelptexts.zip de/dehelptexts.zip nl/nlhelptexts.zip it/ithelptexts.zip fr/frhelptexts.zip /home/jka/html/j-kaltes.github.io/Juggluco/translation

