#ifndef SENSORCOR_H
#define SENSORCOR_H

#include <robo_hardware2.h>

class SensoresCor{
  private:
    #define DIVISOR_H_DIR_VERDE  0
    #define DIVISOR_S_DIR_VERDE  0
    #define DIVISOR_V_DIR_VERDE  0

    #define DIVISOR_H_DIR_PRETO  0
    #define DIVISOR_S_DIR_PRETO  0
    #define DIVISOR_V_DIR_PRETO  0

    #define DIVISOR_H_DIR_BRANCO  0
    #define DIVISOR_S_DIR_BRANCO  0
    #define DIVISOR_V_DIR_BRANCO  0


    #define DIVISOR_H_ESQ_VERDE  0
    #define DIVISOR_S_ESQ_VERDE  0
    #define DIVISOR_V_ESQ_VERDE  0

    #define DIVISOR_H_ESQ_PRETO  0
    #define DIVISOR_S_ESQ_PRETO  0
    #define DIVISOR_V_ESQ_PRETO  0

    #define DIVISOR_H_ESQ_BRANCO  0
    #define DIVISOR_S_ESQ_BRANCO  0
    #define DIVISOR_V_ESQ_BRANCO  0

    HSV sensorCorDir;
    HSV sensorCorEsq;
  
	public:

    inline bool verdeDir(){return(sensorCorDir.h >  DIVISOR_H_DIR_VERDE && sensorCorDir.s <  DIVISOR_S_DIR_VERDE && sensorCorDir.v >  DIVISOR_V_DIR_VERDE);}
    inline bool pretoDir(){return(sensorCorDir.h <  DIVISOR_H_DIR_PRETO && sensorCorDir.s <  DIVISOR_S_DIR_PRETO && sensorCorDir.v >  DIVISOR_V_DIR_PRETO);}
    inline bool brancoDir(){return(sensorCorDir.h > DIVISOR_H_DIR_BRANCO && sensorCorDir.s < DIVISOR_S_DIR_BRANCO && sensorCorDir.v > DIVISOR_V_DIR_BRANCO);}

    inline bool verdeEsq(){return(sensorCorEsq.h >  DIVISOR_H_ESQ_VERDE && sensorCorEsq.s <  DIVISOR_S_ESQ_VERDE && sensorCorEsq.v <  DIVISOR_V_ESQ_VERDE);}
    inline bool pretoEsq(){return(sensorCorEsq.h <  DIVISOR_H_ESQ_PRETO && sensorCorEsq.s >  DIVISOR_S_ESQ_PRETO && sensorCorEsq.v <  DIVISOR_V_ESQ_PRETO);}
    inline bool brancoEsq(){return(sensorCorEsq.h > DIVISOR_H_ESQ_BRANCO && sensorCorEsq.s < DIVISOR_S_ESQ_BRANCO && sensorCorEsq.v > DIVISOR_V_ESQ_BRANCO);}

    inline bool direita(){return(!(verdeEsq()) && verdeDir());}
    inline bool esquerda(){return(!(verdeDir()) && verdeEsq());}
    inline bool meiaVolta(){return(verdeDir()) && verdeEsq();}

    inline void recolherValoresSensoresCor(){sensorCorDir = robo.getHSVDireito(); sensorCorEsq = robo.getHSVEsquerdo(); sensorCorDir = robo.getHSVDireito(); sensorCorEsq = robo.getHSVEsquerdo(); sensorCorDir = robo.getHSVDireito();sensorCorEsq = robo.getHSVEsquerdo(); sensorCorDir = robo.getHSVDireito(); sensorCorEsq = robo.getHSVEsquerdo(); sensorCorDir = robo.getHSVDireito(); sensorCorEsq = robo.getHSVEsquerdo(); sensorCorDir = robo.getHSVDireito();}
};

#endif