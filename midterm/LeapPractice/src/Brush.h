//
//  Brush.h
//  LeapPractice
//
//  Created by Terricka on 3/13/16.
//
//

#ifndef __LeapPractice__Brush__
#define __LeapPractice__Brush__

#include "ofMain.h"
#include "ofxLeapMotion2.h"

#endif /* defined(__LeapPractice__Brush__) */

class Brush {
public:
    
    void setup();
    void update();
    void draw();
    
//    void paintbrush();
//    void paint();
    
    int diam;
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands;
    
    vector <int> fingersFound;
    ofEasyCam cam;
    


};