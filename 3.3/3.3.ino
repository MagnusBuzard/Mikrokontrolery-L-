void setup() {
  Serial.begin (9600);
  Serial.println("Start programu");
}
 float i;
void loop() 
{ 
    float y1 = sin(i);
    float y2 = (sin((2 * i))/(2));
    float y3 = (sin((3 * i))/(3));
    float y4 = (sin((4 * i))/(4));
    float y5 = (sin((5 * i))/(5));
    Serial.println(y1 + y2 + y3 + y4 + y5);
    delay(50);

    i+=0.05;
}
