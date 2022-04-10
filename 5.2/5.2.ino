#include <MultiFuncShield.h>
#include <TimerOne.h>

void setup() 
{
  MFS.initialize(&Timer1); 
  int i = 10;
  do
  {
    MFS.write(i);
    delay(1000);
    i--;
  } while (i >= 0);
}

void loop()
{
  
}
