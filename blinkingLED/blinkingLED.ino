void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= 8; i++){
  pinMode(i,OUTPUT);
  }
  for(int i = 2; i <= 8; i++){
   digitalWrite(i,HIGH);
  }
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(11,HIGH);
  
}
