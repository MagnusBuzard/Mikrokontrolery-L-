#include <PinChangeInterrupt.h>
void setup() 
{
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  attachPCINT(digitalPinToPCINT(A1), button_1, CHANGE);
  attachPCINT(digitalPinToPCINT(A2), button_2, CHANGE);
  attachPCINT(digitalPinToPCINT(A3), button_3, CHANGE);
  Serial.begin (9600);
  Serial.println ("Start programu");
}

void loop() 
{
  // put your main code here, to run repeatedly:
}

void button_1 ()
{
  if(digitalRead(A1) == HIGH)
  {
    Serial.println("Przycisk 1 niewcisietny");
  }
  else
  {
    Serial.println("Przycisk 1 wcisniety");
  }
}
void button_2 ()
{
  if(digitalRead(A2) == HIGH)
  {
    Serial.println("Przycisk 2 niewcisietny");
  }
  else
  {
    Serial.println("Przycisk 2 wcisniety");
  }
}
void button_3 ()
{
  if(digitalRead(A3) == HIGH)
  {
    Serial.println("Przycisk 3 niewcisietny");
  }
  else
  {
    Serial.println("Przycisk 3 wcisniety");
  }
}
