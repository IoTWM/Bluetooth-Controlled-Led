/**********************************************************************************
 *  TITLE: Blootooth controlling a LED
 *  Click on the following links to learn more. 
 *  YouTube Video: https://www.youtube.com/channel/UCscQZ6FyFrx3dKgsPSPOVGQ
 *  by IoT withme
 *  Github link :
 *  https://github.com/IoTWM
 **********************************************************************************/

void setup()
{
 Serial.begin(9600);
 pinMode(13, OUTPUT); 
 }
 
void loop() {
  if(Serial.available()>0)
   {     
      int data= Serial.read();
      switch(data)
      {
        case '1': digitalWrite(13, HIGH);break;
        case '0': digitalWrite(13, LOW);break; 
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
