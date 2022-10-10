const int buttonPinonall  = 13; // pin yang digunakan yaitu pin 13
const int buttonPinled1   = 12; // pin yang digunakan yaitu pin 12
const int buttonPinled2   = 11; // pin yang digunakan yaitu pin 11
const int buttonPinoffall = 10; // pin yang digunakan yaitu pin 10
const int ledPin1 =  2;// pin led 1
const int ledPin2 =  3;// pin led 2

int buttonState = 0;         // variable untuk membaca status pushbutton 

void setup() {
  // instalasi led 
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // instalasi button sebagai input
  pinMode(buttonPinonall, INPUT);
  pinMode(buttonPinled1, INPUT);
  pinMode(buttonPinled2, INPUT);
  pinMode(buttonPinoffall, INPUT);
}

void loop(){
    
  if (digitalRead(buttonPinonall) == HIGH) {
    digitalWrite(ledPin1, HIGH); //led  hidup semua
    digitalWrite(ledPin2, HIGH);// led 2 on
  } 
  else if (digitalRead(buttonPinoffall) == HIGH) {
    digitalWrite(ledPin1, LOW); //led  mati semua
    digitalWrite(ledPin2, LOW); 
  }
  else if (digitalRead(buttonPinled1) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);// led 1 on
  }
  else if (digitalRead(buttonPinled2) == HIGH)
  {
    digitalWrite(ledPin2, HIGH);// led 2 on
  }
}
