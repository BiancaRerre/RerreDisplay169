#include <rerreDisplay169.h>
//#include "MyCustomFont.h"  // Substitua pelo nome correto do arquivo de definição da sua fonte

RerreDisplay169 display;

void setup() {
  Serial.begin(115200);
  display.begin();
  display.clearScreen();
  //display.setCustomFont(&MyCustomFont);  // Substitua pela sua fonte personalizada
}

void loop() {
  display.writeInMiddle("Hello, World!", ST77XX_WHITE, 24);
  delay(2000);  // Aguarde por 2 segundos
  display.clearScreen();
  delay(2000);  // Aguarde por mais 2 segundos
}
