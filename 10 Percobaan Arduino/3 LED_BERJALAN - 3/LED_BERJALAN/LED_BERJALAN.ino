// Membuat Lampu LED Berjalan dengan Arduino
 
void setup()
{
  pinMode(2, OUTPUT); // set pin 2 digital di arduino sebagai output
  pinMode(3, OUTPUT); // set pin 3 digital di arduino sebagai output
  pinMode(4, OUTPUT); // set pin 4 digital di arduino sebagai output
}
 
void loop()
{
  //LED yang ada di Pin 2 menyala, Pin 3-4 mati
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(500); //kecepatan kedip 0,5 detik
 
  //LED yang ada di Pin 3 menyala, Pin 2&4 mati
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(500); //kecepatan kedip 0,5 detik
 
  //LED yang ada di Pin 4 menyala, Pin 2&3 mati
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(500); //kecepatan kedip 0,5 detik
  
}
