// arduino-blink.test.cpp

#include <Arduino.h>

/* 
; Blinking on-board LED (13) on Arduino
; PRECONDITIONS: none
; TEST: the on-board LED blinks
*/
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // Schalte die LED ein (HIGH ist die Spannung)
  delay(1000);              // Warte 1 Sekunde (1000 Millisekunden)
  digitalWrite(13, LOW);    // Schalte die LED aus
  delay(1000);              // Warte 1 Sekunde
}
