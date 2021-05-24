# Control-LED-using-HC-05
BLUETOOTH CONTROL LEDs 

Things you’ll need :-

(Arduino board,
Breadboard,
Bluetooth module/sensor – HC05,
Couple of jumpers/single stranded wires,
LEDs,
An ANDROID(obviously 😛 )

Connections Of Bluetooth module HC05 :-

VCC – to VCC of Arduino. GND – to GND of Arduino. RX – to digital pin 0(TX pin) of Arduino. TX – to digital pin 1(RX pin) of Arduino. (connect RX & TX pin after uploading the code)

Of LED – Positive terminal – to pin 8 of Arduino. Negative terminal – GND of Arduino. 
Procedure :-

Download the app called Android Contoller from Google Playstore (It’s free). 
Make the connections as shown in the above image. Don’t connect the RX & TX pins WHILE/BEFORE  uploading the code !
Copy the code from .ino file.

When you are connecting to the Bluetooth module for the first time, it will ask you the password. Enter 0000 OR 1234.
When the device gets successfully paired with the sensor, the LED lights on sensor will start blinking at a slower rate than usual.

ONE. Copy the code given & test it out !
