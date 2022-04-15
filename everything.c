#include <SPI.h>
#include "period.c"
#include "references.c"
#include <calibration.h>
#define CS 4

void setup() {
  pinMode(CS, OUTPUT);
  digitalWrite(CS, HIGH);

  SPI.begin();
  Serial.begin(9600);
}

void loop() {




}
