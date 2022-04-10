#include <TimerOne.h>

int led = 10;

void setup() {
 pinMode(led, OUTPUT);
 Timer1.initialize(975);
 Timer1.attachInterrupt(breathingLED);
}
void loop()
{
  
}

void breathingLED() 
{
  int x = 1;
  for (int i = 0; i > -1; i = i + x) 
  {
    Timer1.pwm(led, i);
    if (i == 1023) 
    {
      x = -1;
    }
  }
}
