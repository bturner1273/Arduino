bool hazard = false;

void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= 10; i++){
    if(i != 9){
      pinMode(i, OUTPUT);
    }else pinMode(i, INPUT);
  }
}
void check(){
  if(digitalRead(9) == HIGH){
    hazard = true;
  }else hazard = false;
  if(!hazard){
    delay(100);
    }
    else{
    delay(200);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(10, LOW);
    }
}
void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(6, HIGH);
    check();
    reset(); 
    digitalWrite(5, HIGH);
    check();
    reset();
    digitalWrite(8, HIGH);
    check();
    reset();
    digitalWrite(4, HIGH);
    check();
    reset();
    digitalWrite(3, HIGH);
    check();
    reset();
    digitalWrite(2, HIGH);
    check();
    reset();
    digitalWrite(8, HIGH);
    check();
    reset();
    digitalWrite(7, HIGH);
    check();
    reset();
  }

void reset(){
  for(int i = 2; i <= 8; i++){
    digitalWrite(i, LOW);
  }
}

