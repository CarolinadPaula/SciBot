#include "EstrategiaSci.h"

void Estrategia::seguirLinha(){

  sensoresLinha.recolherValoresSensorLinha();

  if(sensoresLinha.frente()){
    motores.paraFrent();
  }
  else if(sensoresLinha.direita()){
    motores.paraDireita();
    delay(100);
  }
  else if(sensoresLinha.esquerda()){
    motores.paraEsquerda();
    delay(100);
  }
  else if (sensoresLinha.pppp()){
    motores.paraFrent();
  }
}

  void Estrategia::desviarObstaculoEsq(){
 
   motores.paraEsquerda90();
   sensoresLinha.recolherValoresSensorLinha();
  
    while(!sensoresLinha.pppp()){
      sensoresLinha.recolherValoresSensorLinha();
      
      if(sensoresLinha.desalinhou_direita()){
         motores.paraDireita();
      }
      else if(sensoresLinha.desalinhou_esquerda()){
         motores.paraEsquerda();
      }
      else{
      motores.paraTras();
      }
  }

    motores.paraFrent();
    delay(6000);
    motores.paraDireita90();
    motores.paraFrent();
    delay(8500);
    motores.paraDireita90();
    motores.paraFrent();
    delay(7000);
   

     while(!sensoresLinha.pppp()){
      sensoresLinha.recolherValoresSensorLinha();
      
      if(sensoresLinha.desalinhou_direita()){
         motores.paraDireita();
      }
      else if(sensoresLinha.desalinhou_esquerda()){
         motores.paraEsquerda();
      }
      else{
      motores.paraTras();
      }
  }
  
  motores.parar();
  delay(5000);
   
  }

void Estrategia::executar(){

  sonar.atualizarSensorSonar();

  if(sonar.getSensorSonar() <= 7)
  desviarObstaculoEsq();

  else{
  seguirLinha();
  }
}
