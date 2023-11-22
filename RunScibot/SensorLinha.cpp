#include "SensorLinha.h"

  void SensoresLinha::recolherValoresSensorLinha(){
    valorSensorLinhaMaisEsq = robo.lerSensorLinhaMaisEsq();;
    valorSensorLinhaEsq = robo.lerSensorLinhaEsq();
    valorSensorLinhaDir = robo.lerSensorLinhaDir();
    valorSensorLinhaMaisDir = robo.lerSensorLinhaMaisDir();
}

  void SensoresLinha::verValoresRecolhidos(){
    recolherValoresSensorLinha();
  
    Serial.print("Sensores refletancia: +esq: ");
    Serial.print(valorSensorLinhaMaisEsq);
    Serial.print("; esq:");
    Serial.print(valorSensorLinhaEsq); 
    Serial.print("; dir:");
    Serial.print(valorSensorLinhaDir); 
    Serial.print("; +dir:");
    Serial.println(valorSensorLinhaMaisDir);

    delay(500);   
}