#include <robo_hardware2.h>
#include "EstrategiaSci.h"
#include "Sonar.h"

Estrategia estrategia;
//Sonar s;
void setup() {
  robo.configurar(false);
  Serial.begin(9600);
}

void loop() {
  estrategia.executar();
}
