#include <MemoriaEEPROM.h>

void setup() {
  Serial.begin(115200);
  MemoriaEEPROM.ReadEeprom();
  Serial.println(MemoriaEEPROM.Memoria_01);
}

void loop() {
}