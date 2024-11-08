/*
Arduino Workshop, Chapter 2
"Blinky" Sketch
*/

void setup() {
  //Set the 13th serial pin on the board to output
  pinMode(13, OUTPUT);
}

void loop() {
  /*Set the 13th serial pin state to HIGH (13th serial pin is connected to the user LED on the Arduino board)
    Setting to HIGH turns the LED on. Wait 1000ms, switch to LOW (off), wait 1000ms, and repeat*/
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
