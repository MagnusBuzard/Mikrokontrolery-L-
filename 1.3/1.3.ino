void setup() 
{
pinMode(A1, INPUT);
pinMode(12, OUTPUT);
}

void loop() 
{
if (digitalRead(A1) == LOW)
  {
    digitalWrite(12, LOW);
  }
else
  {
    digitalWrite(12, HIGH);
  }
}
