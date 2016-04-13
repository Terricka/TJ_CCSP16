//
//  Pend.h
//  pendulum2
//
//  Created by Terricka on 4/13/16.
//
//

#ifndef __pendulum2__Pend__
#define __pendulum2__Pend__

#include <stdio.h>

#include "ofMain.h"

#endif /* defined(__pendulum2__Pend__) */

class Pendulum {
public:
    
    void pend (float angle);
    
    
    int posX, posY, posx0, posy0;
    float accel;
    float length;
    float angle;
    float vel;
    
};