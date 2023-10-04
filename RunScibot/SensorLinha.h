#ifndef SENSORLINHA_H
#define SENSORLINHA_H
#include <robo_hardware2.h>

class SensorLinha{
  
  private:
  
    #define DIVISOR_BRANCO_PRETO 50

    float valorSensorDir;
    float valorSensorEsq;
    
   public:
  
      inline bool bb() {return (valorSensorDir > DIVISOR_BRANCO_PRETO && valorSensorEsq > DIVISOR_BRANCO_PRETO);}
    
      inline bool bp() {return (valorSensorDir < DIVISOR_BRANCO_PRETO && valorSensorEsq > DIVISOR_BRANCO_PRETO);}
      
      inline bool pb() {return (valorSensorDir > DIVISOR_BRANCO_PRETO && valorSensorEsq < DIVISOR_BRANCO_PRETO);}
        
      inline bool pp() {return (valorSensorDir < DIVISOR_BRANCO_PRETO && valorSensorEsq < DIVISOR_BRANCO_PRETO);}

      void recolherValoresSensorLinha();
};
  
#endif
