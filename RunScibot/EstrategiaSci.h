#ifndef ESTRATEGIASCI_H
#define ESTRATEGIASCI_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "SensorLinha.h"

class Estrategia {
  public:

    void executar();

  private:

    void seguirLinha();

    Motores motores;
    SensoresLinha sensoresLinha;
};

#endif
