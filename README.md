# PS4 Server 9.00u


this is a slight mod to <a href=https://github.com/stooged/PS4-Server-900>PS4 Server 9.00</a>

i have added the ability to switch off and on the usb device by using the pin D7 on the board to trigger a relay to control the power to the usb device.

the idea is to cut the 5v power to the usb drive and have it switched on and off by a relay which is controlled by the esp8266 device and switch it off and on during the initial exploit load which removes the need to plug and unplug the usb drive.


<a href="https://youtu.be/WrJMKA0y-Lg" target="_blank">Video</a>


you can make it with a usb A female to male cable, this is a basic diagram of how to set it up.

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/diag.jpg><br>

<br><br>

fast and dirty, this is the test cable i made and this would be the easiest for people to make.

parts used are:<b>

D1 Mini Pro v1 ESP8266 board.

BESTAR  BR-500  Reed Relay (5V, 500Ω)

<a href=https://www.jaycar.com.au/0-5m-usb-2-0-a-male-to-usb-a-female/p/WC7708>0.5m USB 2.0 A Male to USB A Female</a>
</b>

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/10.jpg><br>

<br><br>


this is the mod i did and the parts used are:
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

the slim usb hub has less room but you should be able to fit the board in and use a reed relay to save a bit of space, i dont have a slim so i wont bother making this one but it is the same idea as the other mod.

<b>
<a href=http://www.dobe-game.com/en/productshow-54-167.html>PS4 Slim USB HUB TP4-821</a>

BESTAR  BR-500  Reed Relay (5V, 500Ω)

D1 Mini Pro v1 ESP8266 board.</b>

<img src=https://github.com/stooged/PS4-Server-900u/blob/main/Images/9.jpg><br>


<br><br>

the usb hub for the pro is still coming in the post and i will mod that one next.

<a href=http://www.dobe-game.com/en/productshow-53-177.html>PS4 Pro USB HUB TP4-832</a>

...

...