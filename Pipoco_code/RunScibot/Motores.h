#ifndef MOTORES_H-
#define MOTORES_H
#include <robo_hardware2.h>

class Motores {
       private:
  
    #define VELO_FRENTE 60
    #define VELO_TRAS -60
  
  public:
  
    inline void paraFrente(){robo.acionarMotores(VELO_FRENTE, VELO_FRENTE);}
    
    inline void paraEsquerda(){robo.acionarMotores(VELO_TRAS, VELO_FRENTE);}
    
    inline void paraDireita(){robo.acionarMotores(VELO_FRENTE, VELO_TRAS);}
    
    inline void paraTras(){robo.acionarMotores(-90, -90);}

    inline void parar(){robo.acionarMotores(0, 0);}

    inline void virar90esquerda(){robo.acionarMotores(-90, 90); delay(2900);}

    inline void virar90direita(){robo.acionarMotores(90, -90); delay(2900);}


};

#endif
