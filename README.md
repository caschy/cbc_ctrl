# cbc_ctrl

CutbyCaschy (CbC) Ctrl for diesel heater. Piggy-back interface to 4button RF remote

This device makes your “dumb” diesel heater “smart” by directly interfacing to the stock 4-button RF remote control using a WIFI enabled microcontroller. CbC Ctrl features a webserver allowing for timed events (e.g. heater off) and the setting of target temperatures to attempt to maintain (e.g. thermostat). It features an onboard temperature and humidity sensor with real-time clock module that will keep time even after power is lost.  The controller will "press" the remote buttons to operate the heater. The microcontroller use the ESP32 via a TTGO T-display which has a small 240×135 pixel IPS TFT display with buttons and onboard lithium battery charger.  On the software side it features an initial boot whereby it serves as an access point (WAP) for you to set WIFI settings and then after it connects to your WIFI, it serves up a webpage to provide control and view stats.  It allows for timer functionality and a thermostat type mode to automatically vary the heater speed based upon temperature. 

To populate this board, you’ll need the following components:
<ul>
<li>1 x TTGO T-display (ESP32)</li>
<li>4 x 220 ohm 1/4W Resistor</li>
<li>1 x HTU21D </li>
<li>1 x DS3231 RTC </li>
<li>1 x 16-pin DIP socket </li>
<li>1 x Sharp PC847 </li>
<li>3 x 4pin headers </li>
<li>1 x 5 or 6 pin header </li>
<li>1 x Lipo battery (optional) </li> </ul>

PCBS can be purchased here <a  href="http://cutby.caschy.com/wp/?product=caschy-controller-diesel-heater-remote-controller">CbC controller pcb purchase</a>

The software is working however I am working to make sure the thermostat mode is working 100%.  

***Disclaimer***
I take no responsibility for any damage or harm as a result of using this hardware and/or software.
