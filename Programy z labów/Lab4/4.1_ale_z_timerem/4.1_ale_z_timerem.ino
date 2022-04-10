#include <TimerOne.h>

int led = 10;

void setup()
{
 pinMode(led, OUTPUT);
 Timer1.initialize(975);
 Timer1.attachInterrupt(breathingLED);
}

int i = 0;
int c = 0;
void breathingLED()
{
 if (c < 1023)
 {
  Timer1.pwm(led, i);
  i = i + 1;
  c = c + 1;
 }
 else
 {
  Timer1.pwm(led, i);
  i = i - 1;
  c = c + 1;
  if (c == 2046)c=0;
 }
}

void loop()
{
  
}
