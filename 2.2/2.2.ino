#include <TimerOne.h>

void setup()
{
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 Timer1.initialize(200000);
 Timer1.attachInterrupt(blinkingLED);
}

volatile unsigned long Count = 0;

void blinkingLED()
{
 if (Count == 5)
 {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  Count = 0;
 }
 else
 {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  Count = Count +1;
 }

}
void loop()
{
  
}
