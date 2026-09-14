// gpio.hal.test.cpp

#include <Arduino.h>
#include <libweitwapp/hal/gpio.hal.h>

/* TEST: ARDUNIO - LED13 BLINK
*/

#define LED 13
void setup() {
  hal_gpio_init(LED, OUTPUT);
}

void loop() {
  hal_gpio_put(LED, HIGH);   // Schalte die LED ein (HIGH ist die Spannung)
  delay(500);              // Warte 1 Sekunde (1000 Millisekunden)
  hal_gpio_put(LED, LOW);    // Schalte die LED aus
  delay(500);              // Warte 1 Sekunde
}