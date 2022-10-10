int potPin = A5;
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 int potMeasure = analogRead(A5);
 Serial.println(potMeasure);
 if (potMeasure < 341)
 {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  }
 else if (potMeasure < 682)
 {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  }
 else if (potMeasure < 1024)
 {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  }

}
