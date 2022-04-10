void setup() 
{
  pinMode(A0, INPUT);
  Serial.begin (9600);
  Serial.println ("Start Programu");
}

void loop() 
{
  double val = analogRead(A0) * (5.0 / 1023.0);
  Serial.print (val);
  Serial.println ("[V]");
  delay (1000);
}
