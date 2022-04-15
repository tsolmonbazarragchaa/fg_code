//calibration

void period_cal(){
  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  period_ref = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("period_ref " + String(period_ref));
}

void amplitude_cal(){
  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  amplitude_ref = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("amplitude_ref " + String(amplitude_ref));
}

void phase_cal(){
  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  phase_ref = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("phase_ref " + String(phase_ref));
}
