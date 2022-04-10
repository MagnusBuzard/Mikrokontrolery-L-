#include <MultiFuncShield.h>
#include <TimerOne.h>
#include <Wire.h>

int x;

void setup() 
{
  Timer1.initialize();
  MFS.initialize(&Timer1); 
  for (int i = 10; i >= 0; i--)
  {
    MFS.write(i);
    delay(1000);
    
    if (i == 0);
    {
      x = 0;
    }
  }
  if (x == 0)
  {
    MFS.beep(15);
    MFS.writeLeds(LED_ALL, ON);
    MFS.blinkLeds(LED_ALL, ON);
    delay(2000);
    MFS.blinkLeds(LED_ALL, OFF);
    MFS.writeLeds(LED_ALL, OFF);
  }
}

void loop()
{
 
}
