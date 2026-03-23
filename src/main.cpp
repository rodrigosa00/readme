#include <Arduino.h>

// LEDs
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

// Botões
int botao1 = 6;
int botao2 = 7;
int botao3 = 8;
int botao4 = 9;

void setup() {
  // LEDs como saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  // Botões como entrada com pull-up interno
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  pinMode(botao3, INPUT_PULLUP);
  pinMode(botao4, INPUT_PULLUP);
}

void loop() {
  // Botão 1 controla LED 1
  if (digitalRead(botao1) == LOW) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  // Botão 2 controla LED 2
  if (digitalRead(botao2) == LOW) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  // Botão 3 controla LED 3
  if (digitalRead(botao3) == LOW) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }

  // Botão 4 controla LED 4
  if (digitalRead(botao4) == LOW) {
    digitalWrite(led4, HIGH);
  } else {
    digitalWrite(led4, LOW);
  }
}