// Membuat Lampu LED Berjalan dengan Arduino
 
void setup()
{
  pinMode(2, OUTPUT); // set pin 2 digital di arduino sebagai output
  pinMode(3, OUTPUT); // set pin 3 digital di arduino sebagai output
  pinMode(4, OUTPUT); // set pin 4 digital di arduino sebagai output
  pinMode(5, OUTPUT); // set pin 5 digital di arduino sebagai output
  pinMode(6, OUTPUT); // set pin 6 digital di arduino sebagai output
  pinMode(7, OUTPUT); // set pin 7 digital di arduino sebagai output
  pinMode(8, OUTPUT); // set pin 8 digital di arduino sebagai output
  pinMode(9, OUTPUT); // set pin 8 digital di arduino sebagai output

}
 
void loop()
{
  //LED yang ada di Pin 2 menyala, Pin 3-9 mati
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik
 
  //LED yang ada di Pin 3 menyala, Pin 2,4-9 mati
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik
 
  //LED yang ada di Pin 4 menyala, Pin 2,3,5-9 mati
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik

  //LED yang ada di Pin 5 menyala, Pin 2-4,6-9 mati
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik
  
  //LED yang ada di Pin 6 menyala, Pin 2-5,7-9 mati
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik

  
  //LED yang ada di Pin 7 menyala, Pin 2-6,8,9 mati
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik
  
  //LED yang ada di Pin 8 menyala, Pin 2-7,9 mati 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(500); //kecepatan kedip 0,5 detik
  
  //LED yang ada di Pin 9 menyala, Pin 2-8 mati
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(500); //kecepatan kedip 0,5 detiki
}
