#ifndef SONAR_H
#define SONAR_H

#include <robo_hardware2.h>

class Sonar {
    private:

      float SensorSonar;

    public:

      inline void atualizarSensorSonar(){ SensorSonar = robo.lerSensorSonarFrontal();}

      inline float getSensorSonar() {return (SensorSonar);}
};

#endif
