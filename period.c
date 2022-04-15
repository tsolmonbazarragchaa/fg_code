
void period_read (){

  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  pattern_period = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("period " + String(pattern_period));
}

void period_write (float pattern_period_write ){

  delay(20);
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  pattern_period_write = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("period_write " + String(pattern_period_write));
}


void amplitude_1 (float a_1 ){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  amplitude_1 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("amplitude_1 " + String(amplitude_1));
}

void amplitude_2 (float a_2 ){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  amplitude_2 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("amplitude_2 " + String(amplitude_2));
}

void amplitude_3 (float a_3 ){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  amplitude_3 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("amplitude_3 " + String(amplitude_3));
}

void amplitude_4 (float a_4 ){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  amplitude_4 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("amplitude_4 " + String(amplitude_4));
}

void phase_1_2 (float ph1_2){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  phase_1_2 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("phase_1_2 " + String(phase_1_2));
}
void phase_1_3 (float ph1_3){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  phase_1_3 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("phase_1_3 " + String(phase_1_3));
}
void phase_1_4 (float ph1_4){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  phase_1_2 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("phase_1_3 " + String(phase_1_3));
}
void phase_0_1 (float ph0_1){
  SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE3));
  digitalWrite(CS, LOW);
  SPI.transfer16();
  phase_0_1 = SPI.transfer16();
  digitalWrite(CS, HIGH);
  SPI.endTransaction();
  Serial.println("phase_1_3 " + String(phase_0_1));
}
