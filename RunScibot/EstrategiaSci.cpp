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
  /*void Estrategia::alinharRobo() {

    while (!sensoresLinha.pppp()) {
      sensoresLinha.recolherValoresSensorLinha();

      if (sensoresLinha.desalinhou_direita()){
      motores.paraDireita();
      }
      else if (sensoresLinha.desalinhou_esquerda()){
      motores.paraEsquerda();
      }
      else {
      motores.paraTras();
      }
   }
}*/
 
   void Estrategia::executar(){

    sensoresLinha.verValoresRecolhidos();

    seguirLinha();
}
