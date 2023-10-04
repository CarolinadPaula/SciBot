#include "EstrategiaSci.h"

void Estrategia::seguirLinha(){

  sensoresLinha.recolherValoresSensorLinha();

  if(sensoresLinha.bb()){
    motores.paraFrent();
  }

  else if(sensoresLinha.bp()){
    motores.paraDireita();
    delay(100);
  }

  else if(sensoresLinha.pb()){
    motores.paraEsquerda();
    delay(100);
  } 
  else if(sensoresLinha.pp()){
    motores.parar();
  }
}
 
void Estrategia::executar(){
  seguirLinha();
}