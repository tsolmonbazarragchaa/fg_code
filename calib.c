#include <SPI.h>
#define CS 4
#define CAL_CLK_EN
#define CAL_CLK_
#define CAL_MODE_EN
uint16_t calib;

void setup() {
  pinMode(CS, OUTPUT);
  digitalWrite(CS, HIGH);

  SPI.begin();
  Serial.begin(9600);
}

void loop() {
  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16(0x480D);
  calib = SPI.transfer16(0x480D);
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("Result: " + String(calib));

  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16(0x1E);
  calibr = SPI.transfer16(0x1E);
  digitalWrite(CS, HIGH);
  SPI.endTransaction();

  Serial.println("Result: " + String(calibr));
}
