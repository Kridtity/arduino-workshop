/*
Arduino Workshop, Chapter 3
KITT Wave Sketch
*/

void setup() {
  //Set the 2nd - 6th serial pins on the board to output
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  /* Unoptimised code provided by the textbook
  digitalWrite(2, HIGH); // Turn LED 1 on
  delay(500);             // wait half a second
  digitalWrite(2, LOW);   // Turn LED 1 off
  digitalWrite(3, HIGH);  // and repeat for LED 2 to 5
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  // The loop() will now loop around and start from the top
  */

  //My slightly more optimised still trash code
  for (int i = 2; i = 7; i++) {
    if (i == 2) {
      digitalWrite(2, HIGH);
      delay(500);
    }

    digitalWrite(i - 1, LOW);
    digitalWrite(i, HIGH);
    delay(500);
  }

  //Hypothetically, this may cause very slight latency due to the extra computing requirements needed to process the instructions in a loop compared to pure sequencing
  //It might even be broken considering I'm working under the assumption that once the for loop ends, the void loop will retrigger the for loop and reset int i = 2. Still haven't made the circuit to test it yet
}
