#include <CapacitiveSensor.h>

#define speaker 11
const int potatoSensitivity = 550;

CapacitiveSensor   pin1 = CapacitiveSensor(2,3);        
CapacitiveSensor   pin2 = CapacitiveSensor(2,4);         
CapacitiveSensor   pin3 = CapacitiveSensor(2,5);     
CapacitiveSensor   pin4 = CapacitiveSensor(2,6);     
CapacitiveSensor   pin5 = CapacitiveSensor(2,7);      
CapacitiveSensor   pin6 = CapacitiveSensor(2,8);         
CapacitiveSensor   pin7 = CapacitiveSensor(2,9);   


void setup()                    
{  
  Serial.begin(9600);
}

void loop()                    
{
  long start = millis();
  
  // Set the sensitivity of each potato
  long potato1 =  pin1.capacitiveSensor(3000);
  long potato2 =  pin2.capacitiveSensor(3000);
  long potato3 =  pin3.capacitiveSensor(3000);
  long potato4 =  pin4.capacitiveSensor(3000);
  long potato5 =  pin5.capacitiveSensor(3000);
  long potato6 =  pin6.capacitiveSensor(3000);
  long potato7 =  pin7.capacitiveSensor(3000);
  
  if (potato1 > potatoSensitivity) tone(speaker,131);   
  if (potato2 > potatoSensitivity) tone(speaker,147);   
  if (potato3 > potatoSensitivity) tone(speaker,165);
  if (potato4 > potatoSensitivity) tone(speaker,175);
  if (potato5 > potatoSensitivity) tone(speaker,196);
  if (potato6 > potatoSensitivity) tone(speaker,220);
  if (potato7 > potatoSensitivity) tone(speaker,247);
  
  if (potato1 <= potatoSensitivity  &&  potato2 <= potatoSensitivity  &&  potato3 <= potatoSensitivity && potato4 <= potatoSensitivity  &&  potato5 <= potatoSensitivity  &&  potato6 <= potatoSensitivity &&  potato7<=potatoSensitivity)
    noTone(speaker);

  delay(10);                             
}
