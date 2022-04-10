#include <MultiFuncShield.h>
#include <TimerOne.h>


void setup() 
{
  pinMode(A0, INPUT);
  Timer1.initialize();
  MFS.initialize(&Timer1);
}

void loop() 
{ 
  double val = analogRead(A0) * (5.0 / 1023.0);
  Serial.println ("[V]");
  MFS.write(val, 2);
  delay (1000);
}
