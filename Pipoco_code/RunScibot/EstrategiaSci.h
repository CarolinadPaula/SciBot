#ifndef ESTRATEGIASCI_H
#define ESTRATEGIASCI_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "SensorLinha.h"
#include "Sonar.h"

class Estrategia {
   
  private:
    Sonar sonar;
    Motores motores;
    SensoresLinha sensoresLinha;

    void seguirLinha();

    void virar90graus();

    void desviarObstaculo();

    void alinharRobo();

  public:

    void executar();
    
};

#endif
