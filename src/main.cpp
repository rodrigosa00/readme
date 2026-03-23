#include <Arduino.h>

// Pinos dos LEDs
int leds[] = {2, 3, 4, 5};

void setup() {
  // Configurar todos os pinos como saída
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Acender LEDs um por um (efeito sequência)
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], HIGH);
    delay(500);
  }

  // Apagar LEDs um por um
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], LOW);
    delay(500);
  }
}