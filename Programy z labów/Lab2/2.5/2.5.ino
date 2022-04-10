#include <PinChangeInterrupt.h>

void setup() {
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  digitalWrite(12, HIGH);
  attachPCINT(digitalPinToPCINT(A1), on_led, CHANGE);
}

void loop() 
{
  
}

void on_led()
{
  digitalWrite(12, !digitalRead(12));
}
