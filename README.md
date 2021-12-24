# PS4 Server 9.00u


this is a slight mod to <a href=https://github.com/stooged/PS4-Server-900>PS4 Server 9.00</a>

i have added the ability to switch off and on the usb device by using the pin D7 on the board to trigger a relay to control the power to the usb device.

the idea is to cut the 5v power to the usb drive and have it switched on and off by a relay which is controlled by the esp8266 device and switch it off and on during the initial exploit load which removes the need to plug and unplug the usb drive.


<a href="https://youtu.be/WrJMKA0y-Lg" target="_blank">Video</a>


you can make it with a usb A female to male cable, this is a basic diagram of how to set it up.

<b>TRR1A05D00 5 Volt SPST DIL Reed Relay

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/diag.jpg><br>

BESTAR  BR-500  Reed Relay (5V, 500Ω)</b>

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/diag1.jpg><br>

<br>

another way to set it up is to use a npn transistor and cut the ground to the usb device which was shown by <b><a href=https://www.psxhax.com/threads/ps4-server-9-00-ps4-server-9-00u-for-esp8266-d1-mini-pro-by-stooged.10685/post-189470>blumenal</a></b> over on psxhax.

the parts required are: 

<b>1k resistor<br>
1.1k resistor<br>
BC 548 NPN transistor</b>

this is a basic diagram of how to set that up.

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/diag2.jpg><br>


<br><br>

fast and dirty, this is the test cable i made and this would be the easiest for people to make.

parts used are:<b>

D1 Mini Pro v1 ESP8266 board.

BESTAR  BR-500  Reed Relay (5V, 500Ω)

<a href=https://www.jaycar.com.au/0-5m-usb-2-0-a-male-to-usb-a-female/p/WC7708>0.5m USB 2.0 A Male to USB A Female</a>
</b>

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/10.jpg><br>

<br><br>

i ended up 3d printing a small box to hold the relay and ESP8266 for the cable mod, i filled the relay/wires side with hot glue and glued the box together.

the files for the box are in the <a href=https://github.com/stooged/PS4-Server-900u/tree/main/STL>STL</a> folder and it can be printed with PLA and no supports are needed.

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/11.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/13.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/12.jpg><br>

<br><br>




i made a cable to test blumenal's method and it works perfectly so if you can source those parts it is an alternative to the relay, the code needs no changes for either method to work.


<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/14.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/15.jpg><br>



<br><br>


#H1 PS4 PHAT

the parts used are:
<br>
<b>
D1 Mini Pro v1 ESP8266 board.

<a href=http://www.dobe-game.com/en/productshow-55-151.html>PS4 USB HUB TP4-810</a>

TRR1A05D00 5 Volt SPST DIL Reed Relay.

SanDisk Ultra Fit 8gb usb drive
</b>

some pictures of the mod:
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/1.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/2.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/3.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/4.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/5.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/6.jpg><br>

the end result:
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/8.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/7.jpg><br>

<br><br>

#H1 #PS4 SLIM

the slim usb hub has less room but you can just fit the board in.

the parts used are:

<b>
<a href=http://www.dobe-game.com/en/productshow-54-167.html>PS4 Slim USB HUB TP4-821</a>

TRR1A05D00 5 Volt SPST DIL Reed Relay.

D1 Mini ESP8266 board.</b>

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/16.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/17.jpg><br>


<br><br>


#H1 #PS4 PRO

the usb hub for the pro.

the parts used are:

<a href=http://www.dobe-game.com/en/productshow-53-177.html>PS4 Pro USB HUB TP4-832</a>

TRR1A05D00 5 Volt SPST DIL Reed Relay.

D1 Mini Pro v1 ESP8266 board.

SanDisk Ultra Fit 8gb usb drive

this one was a little different i removed one of the usb ports and pulled the chip out of the usb drive and soldered it directly into the hub and then blocked the hole for the port i removed.

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/18.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/19.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/20.jpg><br>
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/21.jpg><br>

the end result:
<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/22.jpg><br>

<br>