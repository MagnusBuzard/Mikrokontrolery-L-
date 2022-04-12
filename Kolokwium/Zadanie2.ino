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
}

void loop()
{
  delay(200);
  digitalWrite(10, LOW);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
}
