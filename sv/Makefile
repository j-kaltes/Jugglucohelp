all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml

FILES=IOB.html NightPost.html Nightscouthelp.html about.html addconnection.html alarmhelp.html battery.html camerapermission.html changestart.html colorhelp.html connectionoverview.html

html.xml:${FILES}
	 ../html2xml  $^ > $@


install: html.xml 
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-sv
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-sv
svhelptexts.zip:${FILES}
	 zip  $@ $^ 
