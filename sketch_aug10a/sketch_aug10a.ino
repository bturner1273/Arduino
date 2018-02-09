void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(12,OUTPUT);
 for(int i = 3; i <= 9; i++){
  pinMode(i, OUTPUT);
 }
}
void beep(){
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
}
void reset(){
for(int i = 3; i <= 9; i++){
digitalWrite(i, LOW);
}
}
void zero(){
 digitalWrite(9,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(3,HIGH);
}
void one(){
 digitalWrite(9,HIGH);
 digitalWrite(5,HIGH);
}
void two(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
}
void three(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
}
void four(){
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
}
void five(){
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){
    reset();
five();
beep();
reset();
four();
beep();
reset();
three();
beep();
reset();
two();
beep();
reset();
one();
beep();
reset();
zero();
beep();
  }
}
