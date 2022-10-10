int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

void setup() {
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);

}

void loop() {
  digitalWrite (ledPin1, HIGH);
  digitalWrite (ledPin2, HIGH);
  digitalWrite (ledPin3, HIGH);

}
