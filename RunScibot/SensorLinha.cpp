#include "SensorLinha.h"


void SensorLinha::recolherValoresSensorLinha(){
    valorSensorLinhaMaisEsq = robo.lerSensorLinhaMaisEsq();;
    valorSensorLinhaEsq = robo.lerSensorLinhaEsq();
    valorSensorLinhaDir = robo.lerSensorLinhaDir();
    valorSensorLinhaMaisDir = robo.lerSensorLinhaMaisDir();
    
}