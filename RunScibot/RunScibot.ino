#include <robo_hardware2.h>
#include "EstrategiaSci.h"

Estrategia estrategia;

void setup() {
  robo.configurar(false);
  Serial.begin(9600);
}

void loop() {
  estrategia.executar();
}
