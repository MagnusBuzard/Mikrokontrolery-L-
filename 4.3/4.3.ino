int pelna_moc = 15; 
int jasnosc = pelna_moc;
int roznica=1;

void setup() 
{
  pinMode(10, OUTPUT);
  pinMode(A3, INPUT);
  pinMode(A1, INPUT);
}

void loop()
{
    if (digitalRead(A1) == LOW && jasnosc < pelna_moc)
    { 
      jasnosc = jasnosc + roznica; 
    }
    if (digitalRead(A3) == LOW && jasnosc > 0)
    {
      jasnosc = jasnosc - roznica;
    }
    delay(100);
    analogWrite(10, map(jasnosc, 0, pelna_moc, 0, 255));
}
