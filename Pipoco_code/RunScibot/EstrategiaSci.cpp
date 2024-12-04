
#include "EstrategiaSci.h"

void Estrategia::seguirLinha(){

  sensoresLinha.recolherValoresSensorLinha();

  if(sensoresLinha.frente()){
    motores.paraFrente();
  }
  else if(sensoresLinha.direita()){
    motores.paraDireita();
  }
  else if(sensoresLinha.esquerda()){
    motores.paraEsquerda();
  }
  else if (sensoresLinha.pppp()){
    //virarCorVerde();
    motores.paraFrente();
  }
}

void Estrategia::virar90graus(){

  sensoresLinha.recolherValoresSensorLinha();

  if(sensoresLinha.direita90()){
      motores.parar();
      delay(5000);
      motores.paraFrente();
      delay(2000);
      motores.virar90direita();
      seguirLinha();
  }
  else if (sensoresLinha.esquerda90()){
      motores.virar90esquerda();
      motores.parar();
      delay(5000);
      motores.paraFrente();
      delay(2000);
      seguirLinha();
      
  }
}
/*  void Estrategia::alinharRobo() {

    while (!sensoresLinha.bppb() || bbbb()) {
      sensoresLinha.recolherValoresSensorLinha();

      motores.parar();

      motores.paraFrente();
      delay(1000);

      if (sensoresLinha.desalinhou_direita()){
      motores.paraDireita();
      }
      else if (sensoresLinha.desalinhou_esquerda()){
      motores.paraEsquerda();
      }
      else {
      motores.paraFrente();
      }
   }
}*/
  void Estrategia :: desviarObstaculo(){
    sonar.atualizarSensorSonar();
    
    motores.virar90esquerda();
    
    motores.paraFrente();
    delay(4500);

    motores.virar90direita();
   
     motores.paraFrente();
     delay(7500);

     motores.virar90direita();

     motores.paraFrente();
     delay(3500);

     motores.virar90esquerda();

    seguirLinha();
    
  }
  
   void Estrategia::executar(){

    sensoresLinha.verValoresRecolhidos();
    sonar.atualizarSensorSonar();
    sonar.imprimirValores();
    if (sonar.getSensorSonar() <= 5) {
      
       desviarObstaculo();
    }
    else seguirLinha();
}
