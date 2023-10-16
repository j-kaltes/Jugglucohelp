all: html.xml
html2xml: html2xml.cpp
	 g++ -g -std=c++20 $^ -o $@
#	g++ -g -std=c++20 html2xml.cpp -o html2xml
FILES=connectionoverview.html sensorhelp.html settinghelp.html

html.xml:${FILES}
	 ../html2xml  $^ > $@

install: html.xml
	mkdir -p /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-ru
	cp html.xml /o/home/jka/src/android/Glucodata/Common/src/mobile/res/values-ru

ruhelptexts.zip:${FILES}
	 zip  $@ $^ 
