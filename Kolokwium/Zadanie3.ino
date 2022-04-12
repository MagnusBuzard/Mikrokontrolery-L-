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
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(50);
}
