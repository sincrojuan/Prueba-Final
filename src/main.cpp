#include <Arduino.h>

#define LED 3

void setup() {
  //Habilito Serial
  Serial.begin(9600);

  // setup "HOLA MUNDO"
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("Debugeemos: LED encendido");

  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("Debugeemos: LED apagado");

  delay(1000);
}