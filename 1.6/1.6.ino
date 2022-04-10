int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int S1 = A1;

int C1 = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(S1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


if(digitalRead(S1) == LOW){
  C1=C1+1;
  delay(350);
}
else{
  C1=C1;
}
if(C1==0){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
}
if(C1==1){
  digitalWrite(LED1, LOW);
}
if(C1==2){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}
if(C1==3){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}
if(C1==4){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}
if(C1>=5){
  C1=0;
}
}
