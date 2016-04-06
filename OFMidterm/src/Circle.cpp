//
//  Star.cpp
//  midtermfinal
//
//  Created by Terricka on 3/29/16.
//
//

#include "Circle.h"


void Circles::drawCircles(int x, int y, float radius){
    
    r = ofRandom(0, 255);
    g = ofRandom(0, 255);
    b = ofRandom(0, 255);
    
    
    int xMouse = ofGetMouseX();
    int yMouse = ofGetMouseY();

    if(radius > 0){
        float r = ofRandomuf();// number between 0 and 1
        
        if (r > 0.02f){
            
            ofNoFill();
            ofCircle(x, y, radius);
            float newX = x+radius/2;
            drawCircles(x, y, radius/2);
            
        } 
        
        
        
    }


}

    
    
//    if (xMouse > ofGetWidth()/2 && yMouse > ofGetHeight()/2){
//        float circleSize = ofRandomuf();
//        
//        if (circleSize > 0.02f) {
//            c = x + ofGetHeight()/2;
//            d = y + ofGetWidth()/2;
//            
//            ofSetColor(r, g, 255);
//            ofDrawCircle(d , c , 55);
//            
//            ofSetColor(r, 255, b);
//            ofDrawCircle(d , c , 25);
//            
//            theta += 70;
//            float newX = ofGetMouseX() / cos(theta);
//            float newY = ofGetMouseY() / cos(theta);
//            
//            drawCircles(circleSize*100, newX-100, newY-100, circleW, circleH);
//        } else {
//            
//       
//        
//        c = x + ofGetHeight()/2;
//        d = y + ofGetWidth()/2;
//        
//        ofSetColor(r, g, 255);
//        ofDrawCircle(d , c , 30);
//        
//        ofSetColor(r, 255, b);
//        ofDrawCircle(d , c , 15);
//        
//        theta += 70;
//        
//        float newX = (ofGetMouseX() / cos(theta))/2;
//        float newY = (ofGetMouseY() / cos(theta))/2;
//            
//            drawCircles(circleSize*100, newX+100, newY+100, circleW, circleH);
//    }



//void Circles::drawCircles2(float circleSize, int xMouse, int yMouse, float circleW, float circleH){
//    r = ofRandom(0, 255);
//    g = ofRandom(0, 255);
//    b = ofRandom(0, 255);
//    
//    
//    //    int xMouse = ofGetMouseX();
//    //    int yMouse = ofGetMouseY();
//    
//    
//    
//    if (xMouse > ofGetWidth()/2){
//        float x = ofGetMouseX() * cos(theta);
//        float y = ofGetMouseY() * sin(theta);
//        
//        c = x + ofGetHeight()/2;
//        d = y + ofGetWidth()/2;
//        
//        ofSetColor(r, g, 255);
//        ofDrawCircle(d , c , 55);
//        
//        ofSetColor(r, 255, b);
//        ofDrawCircle(d , c , 25);
//        
//        theta += 70;
//        float newX = (ofGetMouseX() / cos(theta))/2;
//        float newY = (ofGetMouseY() / cos(theta));
//        
//        drawCircles(newX, newY, circleW, circleH);
//        
//    } else {
//        float x = ofGetMouseX() * cos(theta);
//        float y = ofGetMouseY() * sin(theta);
//        
//        c = x + ofGetHeight()/2;
//        d = y + ofGetWidth()/2;
//        
//        ofSetColor(r, g, 255);
//        ofDrawCircle(d , c , 55);
//        
//        ofSetColor(r, 255, b);
//        ofDrawCircle(d , c , 25);
//        
//        theta += 70;
//        
//    }
//
//
//}