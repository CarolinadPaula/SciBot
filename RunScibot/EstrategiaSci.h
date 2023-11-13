#ifndef ESTRATEGIASCI_H
#define ESTRATEGIASCI_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "SensorLinha.h"
#include "Sonar.h"

class Estrategia {
  public:

    void executar();

  private:

    void seguirLinha();

    void alinharRobo();

    void desviarObstaculoEsq();

    void desviarObstaculoDir();

    Motores motores;
    SensorLinha sensoresLinha;
    Sonar sonar;
};

#endif
