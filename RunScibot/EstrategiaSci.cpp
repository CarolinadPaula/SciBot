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
}

void Estrategia::desviarObstaculo(){
  motores.paraDireita90();
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
  delay(3000);
  motores.paraEsquerda90();
  motores.paraFrent();
  delay(3000);
  motores.paraEsquerda90();
  motores.paraFrent();
  delay(1250);

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
  delay(1000);
  motores.paraDireita90();
}
 
void Estrategia::executar(){
  
  sonar.atualizarSensorSonar();

  if(sonar.getSensorSonar() <= 7){
  desviarObstaculo();
  }
  else{
  seguirLinha();
  }
}