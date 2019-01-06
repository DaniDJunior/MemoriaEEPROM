
#include "MemoriaEEPROM.h"

ICACHE_FLASH_ATTR MemoriaEEPROMClass::MemoriaEEPROMClass() {
    EEPROMSize = 512;
    Separador = '|';
    EEPROM.begin(EEPROMSize);
}

ICACHE_FLASH_ATTR void MemoriaEEPROMClass::ReadEeprom(void) {
  Memoria_01 = "";
  Memoria_02 = "";
  Memoria_03 = "";
  Memoria_04 = "";
  Memoria_05 = "";
  Memoria_06 = "";
  Memoria_07 = "";
  Memoria_08 = "";
  Memoria_09 = "";
  Memoria_10 = "";
  char aux = ' ';
  int cont = 0;
  for (int i = 0; i < EEPROMSize; i++)
  {
    aux = EEPROM.read(i);
    if(cont < 10)
    {
      if(aux == Separador)
      {
        cont++;
      }
      else
      {
        switch (cont) 
        {
          case 0:
            Memoria_01 += aux;
            break;
          case 1:
            Memoria_02 += aux;
            break;
          case 2:
            Memoria_03 += aux;
            break;
          case 3:
            Memoria_04 += aux;
            break;
          case 4:
            Memoria_05 += aux;
            break;
          case 5:
            Memoria_06 += aux;
            break;
          case 6:
            Memoria_07 += aux;
            break;
          case 7:
            Memoria_08 += aux;
            break;
          case 8:
            Memoria_09 += aux;
            break;
          case 9:
            Memoria_10 += aux;
            break;
        }
      }
    }
  }
}

ICACHE_FLASH_ATTR void MemoriaEEPROMClass::WriteEEPRON(void) {
    char memoria_01[Memoria_01.length() + 1];
    Memoria_01.toCharArray(memoria_01, Memoria_01.length() + 1);
    char memoria_02[Memoria_02.length() + 1];
    Memoria_02.toCharArray(memoria_02, Memoria_02.length() + 1);
    char memoria_03[Memoria_03.length() + 1];
    Memoria_03.toCharArray(memoria_03, Memoria_03.length() + 1);
    char memoria_04[Memoria_04.length() + 1];
    Memoria_04.toCharArray(memoria_04, Memoria_04.length() + 1);
    char memoria_05[Memoria_05.length() + 1];
    Memoria_05.toCharArray(memoria_05, Memoria_05.length() + 1);
    char memoria_06[Memoria_06.length() + 1];
    Memoria_06.toCharArray(memoria_06, Memoria_06.length() + 1);
    char memoria_07[Memoria_07.length() + 1];
    Memoria_07.toCharArray(memoria_07, Memoria_07.length() + 1);
    char memoria_08[Memoria_08.length() + 1];
    Memoria_08.toCharArray(memoria_08, Memoria_08.length() + 1);
    char memoria_09[Memoria_09.length() + 1];
    Memoria_09.toCharArray(memoria_09, Memoria_09.length() + 1);
    char memoria_10[Memoria_10.length() + 1];
    Memoria_10.toCharArray(memoria_10, Memoria_10.length() + 1);

    int cont = 0;
    
    for (int i = 0; i < Memoria_01.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_01[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_02.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_02[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_03.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_03[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_04.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_04[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_05.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_05[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_06.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_06[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_07.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_07[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_08.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_08[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_09.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_09[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    for (int i = 0; i < Memoria_10.length() + 1; i++)
    {
      EEPROM.write(cont,(int)memoria_10[i]);
      cont++;
    }
    EEPROM.write(cont,(int)Separador);
    cont++;
    EEPROM.commit();  
}

ICACHE_FLASH_ATTR void MemoriaEEPROMClass::ClearEEPRON(void) {
    for (int i = 0; i < EEPROMSize; i++)
    {
      EEPROM.write(i,0);
    }
    EEPROM.commit();
}

MemoriaEEPROMClass MemoriaEEPROM;