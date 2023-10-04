#ifndef SENSORDESVIAR_H
#define SENSORDESVIAR_H
#include <robo_hardware2.h>

 class SensorDesviar{

  private:
  
    float SensorDesviar;

  private:

     inline void Desviar::atualizarSensorDesviar(){ SensorDesviar = robo.lerSensorSonarFrontal();}

     inline float getSensorDesviar() {return (SensorDesviar);}

    


 };

#endif
