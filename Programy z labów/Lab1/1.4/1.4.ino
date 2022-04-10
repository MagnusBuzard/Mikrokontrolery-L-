unsigned long RunTime = 0;
unsigned long LEDTime = 0;

void setup() 
{
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (A1, INPUT);
}

void loop() 
{
  RunTime = millis();
  if (digitalRead(A1) == LOW)
  {
    digitalWrite(12, !digitalRead(12));
  } 
  if (RunTime - LEDTime >= 2000UL) 
  {
    LEDTime = RunTime;
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
  }
}
