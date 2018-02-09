
void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= 8; i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  one();
  delay(1000);
  reset();
  delay(1000);
  two();
  delay(1000);
  reset();
  delay(1000);
  
}

void one(){
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
}

void reset(){
  for(int i = 2; i <= 8; i++){
    digitalWrite(i,LOW);
  }
}
void two(){
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
}

