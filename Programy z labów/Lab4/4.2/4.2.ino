void setup() 
{
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
}

void loop() 
{
  if (Serial.available())
  {
   switch (char x = Serial.read())
   {
    case 'q':
    {
      digitalWrite(13, LOW);
      Serial.println("Zapalono 1 diodę");
      break;
    }
    case 'a':
    {
      digitalWrite(13, HIGH);
      Serial.println("Zgaszono 1 diodę");
      break;
    }
    case 'w':
    {
      digitalWrite(12, LOW);
      Serial.println("Zapalono 2 diodę");
      break;
    }
    case 's':
    {
      digitalWrite(12, HIGH);
      Serial.println("Zgaszono 1 diodę");
      break;
    }
    case 'e':
    {
      digitalWrite(11, LOW);
      Serial.println("Zapalono 3 diodę");
      break;
    }
    case 'd':
    {
      digitalWrite(11, HIGH);
      Serial.println("Zgaszono 1 diodę");
      break;
    }
   }
  }
}
