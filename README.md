# Control-LED-using-HC-05
BLUETOOTH CONTROL LEDs 

Things youβll need :-

(Arduino board,
Breadboard,
Bluetooth module/sensor β HC05,
Couple of jumpers/single stranded wires,
LEDs,
An ANDROID(obviously π )

Connections Of Bluetooth module HC05 :-

VCC β to VCC of Arduino. GND β to GND of Arduino. RX β to digital pin 0(TX pin) of Arduino. TX β to digital pin 1(RX pin) of Arduino. (connect RX & TX pin after uploading the code)

Of LED β Positive terminal β to pin 8 of Arduino. Negative terminal β GND of Arduino. 
Procedure :-

Download the app called Android Contoller from Google Playstore (Itβs free). 
Make the connections as shown in the above image. Donβt connect the RX & TX pins WHILE/BEFORE  uploading the code !
Copy the code from .ino file.

When you are connecting to the Bluetooth module for the first time, it will ask you the password. Enter 0000 OR 1234.
When the device gets successfully paired with the sensor, the LED lights on sensor will start blinking at a slower rate than usual.

ONE. Copy the code given & test it out !
