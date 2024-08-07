#ifndef MOTORES_H-
#define MOTORES_H

#include <robo_hardware2.h>

class Motores {
       private:
  
    #define VELO_FRENTE 80
    #define VELO_TRAS -70
  
  public:
  
    inline void paraFrente(){robo.acionarMotores(VELO_FRENTE, VELO_FRENTE);}
    
    inline void paraEsquerda(){robo.acionarMotores(VELO_TRAS, VELO_FRENTE);}
    
    inline void paraDireita(){robo.acionarMotores(VELO_FRENTE, VELO_TRAS);}
    
    inline void paraTras(){robo.acionarMotores(-90, -90);}

};

#endif
