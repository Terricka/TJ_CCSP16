//
//  Pend.cpp
//  pendulum2
//
//  Created by Terricka on 4/13/16.
//
//

#include "Pend.h"

void Pendulum::pend(float angle){
    
    int posx0 = ofGetWidth()/2;
    int posy0 = ofGetHeight()/2+200;
    
    float gravity = 0.4;
    
    
    float accel = -1 * gravity * sin(ofGetElapsedTimef());
    float vel = accel;
    
    int posX = length*(sin(angle));
    int posY = length*(cos(angle));
    
    
    ofSetColor(255);
    ofDrawCircle(posx0, posy0, 20);
}