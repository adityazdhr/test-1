const int ledPin = 2;

const int buttonPin = 4;

int buttonState = 0;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(buttonPin, INPUT);

}

void loop() {

buttonState = digitalRead(buttonPin);

if (buttonState == HIGH) {

digitalWrite(ledPin, HIGH);

Serial.println("LED ON +++++++");

}
else {

digitalWrite(ledPin, LOW);

Serial.println("LED OFF -------");

}

}
