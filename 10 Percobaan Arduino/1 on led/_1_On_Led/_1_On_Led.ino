int ledPin = 7;   // Integers LED connected to digital pin 7 

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin, HIGH);
delay (1000);
}
