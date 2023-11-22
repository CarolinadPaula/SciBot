#ifndef ESTRATEGIASCI_H
#define ESTRATEGIASCI_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "SensorLinha.h"
#include "Sonar.h"
#include "SensorCor.h"

class Estrategia {
  public:

    void executar();

  private:

    void seguirLinha();
    void alinharRobo();
    void desviarObstaculoEsq();
    void desviarObstaculoDir();
    void virarCorVerde();

    Motores motores;
    SensoresLinha sensoresLinha;
    Sonar sonar;
    SensoresCor sensoresCor;
};

#endif
