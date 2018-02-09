void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= 10; i++){
    if(i == 9){
      pinMode(i, INPUT);
    }else{
    pinMode(i, OUTPUT);
    }
  }
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9) == HIGH){
    countDown();
  }
}

void countDown(){
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
  reset();
  
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
void reset(){
  delay(500);
  for(int i = 2; i <= 10; i++){
    if(i != 9){
    digitalWrite(i, LOW);
    }
  }
  delay(500);
}
void beep(){
  digitalWrite(10, HIGH);
  delay(100);
}

