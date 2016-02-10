//
//  balls.h
//  homework
//
//  Created by Terricka on 2/9/16.
//
//

#ifndef __homework__balls__
#define __homework__balls__

#include "ofMain.h"
#include <stdio.h>

#endif /* defined(__homework__balls__) */

class Balls {
public:
    // properties
    
    int r, g, b;
    string name;
    
    // methods
    void go();
    void stop();
    void backwards();
    
    void setup();
    void move();
    void display();
    void collide();
    
    ofPoint pos;
    ofPoint speed;
    
    int diameter;

    
};