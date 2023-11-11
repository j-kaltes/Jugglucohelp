# Juggluco help files
These files are also visible under https://www.juggluco.nl/Jugglucohelp

To write a translation of Juggluco you just translate the files ending in **.html** making use of LibreOffice.

To make a full translation also the following files of the
Juggluco source need to be translated: https://raw.githubusercontent.com/j-kaltes/Juggluco/primary/Common/src/main/res/values/strings.xml and https://raw.githubusercontent.com/j-kaltes/Juggluco/primary/Common/src/main/cpp/curve/jugglucotext.cpp

The entries in ****strings.xml**** have a name used by the program and text shown to the user that is different in different languages.
For example different translations of the entry with the name *visible* are:
`values/strings.xml:		<string name="visible">Visible</string>`  
`values-de/strings.xml:		<string name="visible">Sichtbar</string>`  
`values-it/strings.xml:		<string name="visible">Visibile</string>`  
`values-nl/strings.xml:		<string name="visible">Tonen</string>`  
`values-pl/strings.xml:		<string name="visible">Pokaż</string>`  
`values-pt/strings.xml:		<string name="visible">Visível</string>`  

The name "visible" stays the same but word(s) between `<string name="visible">` and `</string>` are language specific.  
  
In ****jugglucotext.cpp**** the text between quotes is translated, except for "jugglucotext.h".  
For example:  
jugglucotext.cpp:	.daylabel={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"},  
Translations:  
dejugglucotext.cpp:	.daylabel={"So","Mo","Di","Mi","Do","Fr","Sa"},  
itjugglucotext.cpp:	.daylabel={"dom","lun","mar","mer","gio","ven","sab"},  
nljugglucotext.cpp:	.daylabel={"zon","maa","din","woe","don","vri","zat"},  
pljugglucotext.cpp:	.daylabel={"nie","pon","wto","śro","czw","pią","sob"},  
ptjugglucotext.cpp:	.daylabel={"Dom","Seg","Ter","Qua","Qui","Sex","Sáb"},  
  
All translations should be short enough to fit on the display, especially text that is displayed on WearOS watches.
jugglucotext.cpp contains some additional length restrictions. The strings in labels and shortinit should not be longer than 11 bytes. In unaccented English text each character is one byte, but accented text uses more than one byte for one character.
labels and shortinit are just examples of what users can do and don't need to be translated literally. Labels are labels for the Amounts entered and shortinit are shortcuts that can be used in the Garmin watch app Kerfstok.

The abbreviations for days and month don't have an absolute byte number restriction, but should be three characters long, so they don't use too much space.

The easiest way to make a translation is to ask me to translate the above files with Google Translate. A native speaker of the language can thereafter read this translation and remove the mistakes.

You can send an E-Mail to jaapkorthalsaltes@gmail.com.
