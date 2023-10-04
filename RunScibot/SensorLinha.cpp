#include "SensorLinha.h"


void SensorLinha::recolherValoresSensorLinha(){
    valorSensorEsq = robo.lerSensorLinhaEsq();
    valorSensorDir = robo.lerSensorLinhaDir();
    
}