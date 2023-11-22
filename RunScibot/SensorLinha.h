#ifndef SENSORLINHA_H
#define SENSORLINHA_H
#include <robo_hardware2.h>

class SensoresLinha{
  
  private:
  
    #define DIVISOR_BRANCO_PRETO_MAIS_ESQ 70
    #define DIVISOR_BRANCO_PRETO_ESQ 70
    #define DIVISOR_BRANCO_PRETO_DIR 70
    #define DIVISOR_BRANCO_PRETO_MAIS_DIR 70


    float valorSensorLinhaMaisDir;
    float valorSensorLinhaDir;
    float valorSensorLinhaEsq;
    float valorSensorLinhaMaisEsq;
    
   public:
        inline bool pppp() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool pppb() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool ppbb() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool pbbb() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bppp() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bppb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bpbb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbpp() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbpb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbbp() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbbb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}

        inline bool   frente(){return (bbbb() || bppb() || pppp());}
        inline bool  direita(){return (pppb() || ppbb() || pbbb() || bpbb());}
        inline bool esquerda(){return (bppp() || bbpp() || bbpb() || bbbp());}
        
        inline bool  desalinhou_direita(){return (bppp() || bbpp() || bbpb() || bbbp());}
        inline bool desalinhou_esquerda(){return (pppb() || ppbb() || pbbb() || bpbb() );}
        
      void recolherValoresSensorLinha();
      void verValoresRecolhidos();
};
  
#endif
