#include "EstrategiaSci.h"

void Estrategia::seguirLinha(){
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
}
 
void Estrategia::executar(){
  seguirLinha();
}