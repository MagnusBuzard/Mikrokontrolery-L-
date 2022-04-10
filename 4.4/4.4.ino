String readString;

void setup() 
{
 Serial.begin (115200);

 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(3, OUTPUT);
 digitalWrite(3, HIGH);
}

void parseString(String s)
{
  int led1 = s.substring (0, 1).toInt();
  int led2 = s.substring (2, 3).toInt();
  int led3 = s.substring (4, 7).toInt();
  int led4 = s.substring (8, 11).toInt();
  int buz = s.substring (12, 13).toInt();

  digitalWrite (13, !led1);
  digitalWrite (12, !led2);
  analogWrite (11, (255-map(led3, 0, 100, 0, 255)));
  analogWrite (10, (255-led4));
  digitalWrite (3, !buz);
}

void receiveData()
{
  while (Serial.available())
  {
    char c = Serial.read();
    if (c == '\n')
    {
      parseString(readString);
      readString= "";
    }
    else
    {
      readString += c;
    }
  }
}

void loop() 
{
  receiveData();
}
