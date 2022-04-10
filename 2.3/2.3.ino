#include <TimerOne.h>
#include <PinChangeInterrupt.h>

int C;
volatile byte state = LOW;

void setup() 
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  pinMode(A1, INPUT);
  Timer1.initialize(200000);
  Timer1.attachInterrupt(adding);
  attachPCINT(digitalPinToPCINT(A1), on_led, CHANGE);
}

void loop() 
{
  if((C == 0) && (state == HIGH))
  {
    digitalWrite(10, LOW);
  }
  if(C == 1) 
  {
    digitalWrite(11, LOW);
  }
  if(C == 2)
  {
    digitalWrite(12, LOW);
  }
  if(C == 3)
  {
    digitalWrite(13, LOW);
  }
}

void adding()
{
  if (state == LOW)
  {
    C = 0;
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  }
  else if (state == HIGH)
  {
    C++;
  }
}

void on_led()
{
 state = !state;
}
