void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  map(x,0,255,0,1023);
  analogWrite(3, x);
  blink(100);
}

void blink(int x){
  analogWrite(3, LOW);
  delay(100);
  analogWrite(3, HIGH);
  delay(100);
}

