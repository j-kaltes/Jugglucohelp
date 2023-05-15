# Juggluco help files
To write a translation of Juggluco you just translate the files ending in **.html** making use of LibreOffice.

To make a full translation also the following files of the
Juggluco source need to be translated:

Common/src/main/res/values/***strings.xml***

and

Common/src/main/cpp/curve/***jugglucotext.cpp***

The entries in *strings.xml* have a name used by the program and text shown to the user that is different in different languages.
For example different translations of the entry with the name *visible* are:
    values/strings.xml:		<string name="visible">Visible</string>  
    values-de/strings.xml:		<string name="visible">Sichtbar</string>  
    values-it/strings.xml:		<string name="visible">Visibile</string>  
    values-nl/strings.xml:		<string name="visible">Tonen</string>  
    values-pl/strings.xml:		<string name="visible">Pokaż</string>  
    values-pt/strings.xml:		<string name="visible">Visível</strig>  
The name "visible" stays the same but word(s) between <string name="visible"> and </string> are language specific.  
  
In *jugglucotext.cpp* the text between quotes has to be translated, except for "jugglucotext.h".  
For example:  
jugglucotext.cpp:	.daylabel={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"},  
Translations:  
dejugglucotext.cpp:	.daylabel={"So","Mo","Di","Mi","Do","Fr","Sa"},  
itjugglucotext.cpp:	.daylabel={"dom","lun","mar","mer","gio","ven","sab"},  
nljugglucotext.cpp:	.daylabel={"zon","maa","din","woe","don","vri","zat"},  
pljugglucotext.cpp:	.daylabel={"nie","pon","wto","śro","czw","pią","sob"},  
ptjugglucotext.cpp:	.daylabel={"Dom","Seg","Ter","Qua","Qui","Sex","Sáb"},  
  
