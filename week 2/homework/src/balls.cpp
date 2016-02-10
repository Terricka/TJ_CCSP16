//
//  balls.cpp
//  homework
//
//  Created by Terricka on 2/9/16.
//
//

#include "balls.h"


void Balls::go(){
    
    cout << "going" << endl;
    r = ofRandom(0, 255);
    b = ofRandom(0, 255);
    g = ofRandom(0, 255);
    ofNoFill();
    ofDrawSphere(ofGetWidth()/2,ofGetHeight()/2, 200, 200);
    ofSetColor(r, g, b);
    ofDrawSphere(350, 300, 50,50);
    ofSetColor(r, g, b);
    ofDrawSphere(650, 300, 50,50);
    ofSetColor(r, g, b);
    ofDrawRectangle(350, 500, 300, 75);
    
}

void Balls::stop(){
    
    cout << "stopping" << endl;
    
    r = ofRandom(0, 255);
    b = ofRandom(0, 255);
    g = ofRandom(0, 255);
    ofSetColor(255, g,b);
    ofDrawSphere(ofGetWidth()/2,ofGetHeight()/2, 200, 200);
//
}

void Balls::backwards(){
     cout << "backwards" << endl;
    
    ofSetColor(255, g,b);
    ofDrawCone(ofGetMouseX(), ofGetMouseY(), 150, 200);
}

void Balls::setup(){
    pos.x = ofRandomHeight();
    pos.y = ofRandomWidth();
    
    speed.x = 8;
    speed.y = 8;
    
    diameter = 20;
    
    r = ofRandom(0, 255);
    g = ofRandom(0, 255);
    b = ofRandom(0, 255);
    
    int x = ofRandomWidth();
    int y = ofRandomHeight();
}

void Balls::move(){
    pos.x += speed.x;
    pos.y += speed.y;
    
    if (pos.x < 0 || pos.x > ofGetWindowWidth() + diameter){
        speed.x = -speed.x;
    }
    
    if(pos.y < 0 || pos.y > ofGetWindowHeight() + diameter){
        speed.y = -speed.y;
    }
}

void Balls::display(){
    
    ofSetColor(r, g, b);
    ofCircle(pos.x, pos.y, diameter);
    
}

void Balls::collide(){
    
}