
const int buzzer = 13; //buzzer to arduino pin 13


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 13 as an output

}

void loop(){
 
  tone(buzzer,4500); // You can change the tone by changing the number
}
