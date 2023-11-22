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
    //virarCorVerde();
    motores.paraFrent();
  }
}

  void Estrategia::virarCorVerde(){
    motores.paraFrent();
    delay(300);
    motores.parar(100);
    
    robo.habilitaTCS34();
    sensoresCor.recolherValoresSensoresCor();
    
    if (sensoresCor.direita()) {
      motores.paraFrent();
      delay(200);
      motores.paraEsquerda90();
    }
    
    else if (sensoresCor.esquerda()) {
      motores.paraFrent();
      delay(200);
      motores.paraDireita90();
    }

    else if (sensoresCor.meiaVolta()) {
      motores.paraFrent();
      delay(200);
      motores.paraDireita90();
      motores.paraDireita90();
    }

    else {
      motores.paraTras();
      delay(300);
      motores.paraFrent();
      delay(200);
    }
  }

  void Estrategia::alinharRobo() {

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
}
  void Estrategia::desviarObstaculoEsq(){
 
    motores.paraEsquerda90();
   
    sensoresLinha.recolherValoresSensorLinha();

    alinharRobo();

    motores.paraFrent();
    
    delay(6000);
    
    motores.paraDireita90();
    
    motores.paraFrent();
    
    delay(9000);
    
    motores.paraDireita90();
    
    motores.paraFrent();
    
    delay(7000);
    
    sensoresLinha.recolherValoresSensorLinha();

    alinharRobo();
  
    motores.paraFrent();
  
    delay(1000);
  
    motores.paraEsquerda90();
   
  }

  void Estrategia::desviarObstaculoDir(){
 
    motores.paraDireita90();
    
    sensoresLinha.recolherValoresSensorLinha();
  
    alinharRobo();

    motores.paraFrent();
    
    delay(6000);
    
    motores.paraEsquerda90();
    
    motores.paraFrent();
    
    delay(9000);
    
    motores.paraEsquerda90();
    
    motores.paraFrent();
    
    delay(3000);
    
    sensoresLinha.recolherValoresSensorLinha();

    alinharRobo();
  
    motores.paraFrent();
    
    delay(1000);
    
    motores.paraDireita90();
   
  }
  
   void Estrategia::executar(){

    sensoresLinha.verValoresRecolhidos();
    sonar.atualizarSensorSonar();

    if(sonar.getSensorSonar() <= 7)
    desviarObstaculoEsq();

    else{
    seguirLinha();
    }
}
