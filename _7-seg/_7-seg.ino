void setup() {
  // put your setup code here, to run once:
  //for setup assign the pinMode of every pin you will use in the code
  for(int i = 2; i <= 10; i++){ //looping through pins 2-10 (inclusive)
    if(i == 9){ //pin 9 is the only pin we designate as an INPUT
      pinMode(i, INPUT);
    }else{//Every other pin is an OUTPUT
    pinMode(i, OUTPUT);
    }
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9) == HIGH){ //if the pushbutton is pressed
   for(int i = 2; i <= 10; i++){
    if(i == 9){ //bad practice to write an input
                //it wouldn't do anything but we exclude it from
                //the loop
    }else{
    digitalWrite(i, HIGH);  //loops through every pin but 9
    }
   }
   delay(100); //This is just to get the Piezo to buzz at the correct freq
    reset(); //turn everything off
  } 
}
void reset(){
  for(int i = 2; i <= 10; i++){ //loop through every pin used
    if(i == 9){//can't write an input
      
    }else{
    digitalWrite(i, LOW); //digitalWrite every output low to turn all 
                          //components off when the button isn't pressed
    }
  }
}






