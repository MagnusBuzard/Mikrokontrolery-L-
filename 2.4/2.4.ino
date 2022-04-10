#include <TimerOne.h>
#include <PinChangeInterrupt.h>
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  Timer1.initialize(2000000);
  Timer1.attachInterrupt(blinking);
  attachPCINT(digitalPinToPCINT(A1), on_led, RISING);
}

void loop() 
{
  
}

void blinking()
{
  digitalWrite(13, !digitalRead(13));
}

void on_led()
{
  digitalWrite(12, !digitalRead(12));
}
