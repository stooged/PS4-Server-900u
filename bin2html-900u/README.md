# bin2html 900u

convert .bin payloads to a single .html file for the 9.00 exploit removing the need for binloader/netcat etc allowing full offline caching.

modified for <a href=https://github.com/stooged/PS4-Server-900u>PS4 Server 9.00u</a> to include usb control. 

the <a href=https://github.com/stooged/bin2html-900/blob/main/template.dat>template.dat</a> file is used to create all in one .html payload files

the <a href=https://github.com/stooged/bin2html-900/blob/main/jsreq-template.dat>jsreq-template.dat</a> file is is used to create a .html payload file that still requires int64.js, rop.js and webkit.js this can be used to save space by not adding these scripts to the main payload.html file.

<br><br>

<b>usage:</b>

for all in one .html payloads:

bin2html.py [binfile]

<br>

for .html payloads that will require external .js:

bin2html.py [binfile] 1

<br><br>

<b>all in one example:</b>

bin2html.py AppToUsb.bin

<br>

<b>external .js example:</b>

bin2html.py AppToUsb.bin 1