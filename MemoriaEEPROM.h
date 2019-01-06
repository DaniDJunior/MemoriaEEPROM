#ifndef MemoriaEEPROM_h
#define MemoriaEEPROM_h

#include <Arduino.h>
#include <EEPROM.h>

class MemoriaEEPROMClass
{
  public:
	ICACHE_FLASH_ATTR MemoriaEEPROMClass();
	ICACHE_FLASH_ATTR void ReadEeprom();
	ICACHE_FLASH_ATTR void WriteEEPRON();
	ICACHE_FLASH_ATTR void ClearEEPRON();
    String Memoria_01;
    String Memoria_02;
    String Memoria_03;
    String Memoria_04;
    String Memoria_05;
    String Memoria_06;
    String Memoria_07;
    String Memoria_08;
    String Memoria_09;
    String Memoria_10;
    char Separador;
    int EEPROMSize;
};
extern MemoriaEEPROMClass MemoriaEEPROM;
#endif