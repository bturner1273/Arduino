void setup() {
  // put your setup code here, to run once:
 for(int i = 2; i <= 10; i++){
  if(i != 9){
  pinMode(i, OUTPUT);
  }else{
    pinMode(i, INPUT);
  }
 }
 }
void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(9) == HIGH){
  reset();
  goThroughNumbers();
  randomDiceRoll();
 }
 
}

void goThroughNumbers(){
digitalWrite(10,HIGH);
zero();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
one();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
two();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
three();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
four();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
five();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
six();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
seven();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
eight();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
digitalWrite(10,HIGH);
nine();
delay(100);
digitalWrite(10,LOW);
delay(100);
reset();
}
void reset(){
for(int i = 2; i <= 10; i++){
if(i != 9){
digitalWrite(i, LOW);
}
}
}
void nine(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}
void eight(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}
void seven(){
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
}
void six(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}
void five(){
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
}
void four(){
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}
void three(){
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(8, HIGH);
}
void two(){
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
}
void one(){
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
}
void zero(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}
void randomDiceRoll(){
 int x = random(0,9);
 switch(x){
  case 0:
  zero();
  delay(100);
  reset();
  delay(100);
  zero();
  delay(100);
  reset();
  delay(100);
  zero();
  delay(100);
  reset();
  delay(100);
  zero();
  delay(100);
  break;
  case 1:
  one();
  delay(100);
  reset();
  delay(100);
  one();
  delay(100);
  reset();
  delay(100);
  one();
  delay(100);
  reset();
  delay(100);
  one();
  delay(100);
  break;
  case 2:
  two();
  delay(100);
  reset();
  delay(100);
  two();
  delay(100);
  reset();
  delay(100);
  two();
  delay(100);
  reset();
  delay(100);
  two();
  delay(100);
  break;
  case 3:
  three();
  delay(100);
  reset();
  delay(100);
  three();
  delay(100);
  reset();
  delay(100);
  three();
  delay(100);
  reset();
  delay(100);
  three();
  delay(100);
  break;
  case 4:
  four();
  delay(100);
  reset();
  delay(100);
  four();
  delay(100);
  reset();
  delay(100);
  four();
  delay(100);
  reset();
  delay(100);
  four();
  delay(100);
  break;
  case 5:
  five();
  delay(100);
  reset();
  delay(100);
  five();
  delay(100);
  reset();
  delay(100);
  five();
  delay(100);
  reset();
  delay(100);
  five();
  delay(100);
  break;
  case 6:
  six();
  delay(100);
  reset();
  delay(100);
  six();
  delay(100);
  reset();
  delay(100);
  six();
  delay(100);
  reset();
  delay(100);
  six();
  delay(100);
  break;
  case 7:
  seven();
  delay(100);
  reset();
  delay(100);
  seven();
  delay(100);
  reset();
  delay(100);
  seven();
  delay(100);
  reset();
  delay(100);
  seven();
  delay(100);
  break;
  case 8:
  eight();
  delay(100);
  reset();
  delay(100);
  eight();
  delay(100);
  reset();
  delay(100);
  eight();
  delay(100);
  reset();
  delay(100);
  eight();
  delay(100);
  break;
  case 9:
  nine();
  delay(100);
  reset();
  delay(100);
  nine();
  delay(100);
  reset();
  delay(100);
  nine();
  delay(100);
  reset();
  delay(100);
  nine();
  delay(100);
  break;
 }
}

