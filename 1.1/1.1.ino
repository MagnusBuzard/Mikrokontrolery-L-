//Należy napisać program zapalający wbudowany na płytce Arduino LED po 1 s od startu
//programu. Do opóźnienia można wykorzystać funkcję: delay(ms)
//której argumentem jest opóźnienie w ms.

void setup() 
{
  pinMode(13, OUTPUT);
 
}

void loop()
{
  delay(1000);
  digitalWrite(13, HIGH);
}
