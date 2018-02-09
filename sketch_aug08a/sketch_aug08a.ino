void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(12,OUTPUT);
 for(int i = 3; i <= 9; i++){
  pinMode(i, OUTPUT);
 }
 }
 

void goThroughNumbers(){
digitalWrite(12,HIGH);
zero();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
one();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
two();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
three();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
four();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
five();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
six();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
seven();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
eight();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
digitalWrite(12,HIGH);
nine();
delay(100);
digitalWrite(12,LOW);
delay(100);
reset();
}


void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(2) == HIGH){
  reset();
  goThroughNumbers();
  randomDiceRoll();
 }
 
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
void six(){
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
}
void seven(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
}
void eight(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
}
void nine(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
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

