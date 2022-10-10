int Green1 = 2;
int Yellow1 = 3;
int Red1 = 4;
int Green2 = 5;
int Yellow2 = 6;
int Red2 = 7;
int Green3 = 8;
int Yellow3 = 9;
int Red3 = 10;

void setup() {
  
  // Initialize The LED Pins As Output Signals
  
  pinMode(Green1, OUTPUT);
  pinMode(Yellow1, OUTPUT);
  pinMode(Red1, OUTPUT);
  pinMode(Green2, OUTPUT);
  pinMode(Yellow2, OUTPUT);
  pinMode(Red2, OUTPUT);
  pinMode(Green3, OUTPUT);
  pinMode(Yellow3, OUTPUT);
  pinMode(Red3, OUTPUT);
  
  // Now The LEDs Are Initialized We Need To Tell The Arduino
  // Which Commands It Needs To Run In "VOID LOOP"
  
}

void loop() {
  
  
  //Turn On Red Lights Two And Three
  digitalWrite(Red2, HIGH);
  digitalWrite(Red3, HIGH);
  
  //Turn On/Off Green Light One
  digitalWrite(Green1, HIGH);
  delay(12000);
  digitalWrite(Green1, LOW);
  delay(100);
  
  //Turn On/Off Yellow Light One
  digitalWrite(Yellow1, HIGH);
  delay(4000);
  digitalWrite(Yellow1, LOW);
  delay(100); 
  
  //Turn On Red Light One And Turn Off Red Light Two
  digitalWrite(Red1, HIGH);
  delay(3000);
  digitalWrite(Red2, LOW);
  delay(100);
  
  //Turn On/Off Green Light Two
  digitalWrite(Green2, HIGH);
  delay(12000);
  digitalWrite(Green2, LOW);
  delay(100);
  
  //Turn On/Off Yellow Light Two
  digitalWrite(Yellow2, HIGH);
  delay(4000);
  digitalWrite(Yellow2, LOW);
  delay(100);
  
  //Turn On Red Light Two And Turn Off Red Light Three
  digitalWrite(Red2, HIGH);
  delay(3000);
  digitalWrite(Red3, LOW);
  delay(100);
  
  //Turn On/Off Green Light Three
  digitalWrite(Green3, HIGH);
  delay(12000);
  digitalWrite(Green3, LOW);
  delay(100);
  
  //Turn On/Off Yellow Light Three
  digitalWrite(Yellow3, HIGH);
  delay(4000);
  digitalWrite(Yellow3, LOW);
  delay(100);
  
  //Turn On Red Light Three And Turn Off Red Light One
  digitalWrite(Red3, HIGH);
  delay(3000);
  digitalWrite(Red1, LOW);
  delay(100);
  
}
