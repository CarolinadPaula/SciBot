
#ifndef MOTORES_H
#define MOTORES_H

#include <robo_hardware2.h>

class Motores {
       private:
  
    #define VELO_FRENT 90
    
    #define VELO_TRAS -70
  
  public:
  
    inline void paraFrent(){robo.acionarMotores(VELO_FRENT, VELO_FRENT);}
    
    inline void paraTras(){robo.acionarMotores(VELO_TRAS, VELO_TRAS);};
    
    inline void paraEsquerda(){robo.acionarMotores(VELO_TRAS, VELO_FRENT);}
    
    inline void paraDireita(){robo.acionarMotores(VELO_FRENT, VELO_TRAS);}
    
    inline void parar(){robo.acionarMotores(0, 0);}

    inline void paraDireita90(){robo.acionarMotores(VELO_TRAS, VELO_FRENT); delay(4500);}

    inline void paraEsquerda90(){robo.acionarMotores(VELO_FRENT, VELO_TRAS); delay(4500);}
};

#endif
