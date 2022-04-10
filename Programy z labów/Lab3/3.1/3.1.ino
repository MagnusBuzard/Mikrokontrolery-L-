#include <TimerOne.h>
void setup() {
  Serial.begin (9600);
  Serial.println ("Start Programu");
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(czas);
}

int t;
void loop(){
  }
void czas() {
  Serial.print ("Czas ");
  Serial.print (t);
  Serial.print (" s");
  Serial.println ();

  t++;
  if (t==10){
    t=0;
  }
}
