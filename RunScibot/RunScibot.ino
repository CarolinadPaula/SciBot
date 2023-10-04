#include <robo_hardware2.h>
#include "EstrategiaSci.h"

Estrategia estrategia;

void setup() {
  robo.configurar(false);
}

void loop() {
  estrategia.executar();


}
