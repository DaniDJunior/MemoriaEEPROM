#include <MemoriaEEPROM.h>

void setup() {
  Serial.begin(115200);
  MemoriaEEPROM.Memoria_01 = "Teste";
  MemoriaEEPROM.WriteEEPRON();
}

void loop() {
}