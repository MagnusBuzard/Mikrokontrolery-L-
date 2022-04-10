#include <TimerOne.h>

void setup()
{
 pinMode(13, OUTPUT);
 Timer1.initialize(500000);
 Timer1.attachInterrupt(blinkLED);
}

int ledState = LOW;

void blinkLED(void)
{
  if (ledState == LOW) 
  {
    ledState = HIGH;
  } 
  else 
  {
    ledState = LOW;
  }
  digitalWrite(13, ledState);
}

void loop()
{
  
}
