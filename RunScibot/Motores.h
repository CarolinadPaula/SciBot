#ifndef MOTORES_H
#define MOTORES_H

#include <robo_hardware2.h>

class Motores {
       private:
  
    #define VELO_FRENT 90
    #define VELO_TRAS -70
  
  public:
  
    inline void paraFrent(){robo.acionarMotores(VELO_FRENT, VELO_FRENT);}
    inline void paraEsquerda(){robo.acionarMotores(VELO_TRAS, VELO_FRENT);}
    inline void paraDireita(){robo.acionarMotores(VELO_FRENT, VELO_TRAS);}
    inline void paraTras(){robo.acionarMotores(-90, -90);}
    
    inline void parar(int tempo){robo.acionarMotores(0, 0); delay(tempo);}

    inline void paraDireita90(){robo.acionarMotores(-90, 90); delay(4000);}
    inline void paraEsquerda90(){robo.acionarMotores(90, -90); delay(4000);}
};

#endif