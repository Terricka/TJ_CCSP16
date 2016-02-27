//
//  Tree.cpp
//  recursivetree
//
//  Created by Terricka on 2/24/16.
//
//

#include "Tree.h"


// void Tree:: functios from the header file
void Tree::seed1(float dotSize, float angle, float x, float y) {
    
    // nested if statment
    if(dotSize > 1.0f){
        float r = ofRandomuf(); // will give a random number between 0 and 1
        
       
            // first if statement will happpen 98% of the time
            if(r > 0.02) {
                ofCircle(x, y, dotSize);
                float newX = x + cos(angle)*dotSize;
                float newY = y + sin(angle)*dotSize;
                seed1(dotSize*0.9f, angle - angleOffSetA, newX, newY); // changing the position of x and y each time
            }   else {
                ofCircle(x, y, dotSize);
                float newX = x + cos(angle)*dotSize;
                float newY = y + sin(angle)*dotSize;
                seed1(dotSize*0.3f, angle - angleOffSetA, newX, newY);
                seed2(dotSize*0.7f, angle + angleOffSetB, newX, newY);
                seed1(dotSize*0.1f, angle - angleOffSetB, newX, newY);
            
            }
            
        }
}

void Tree::seed2(float dotSize, float angle, float x, float y){
    
    if(dotSize > 1.0f){
        float r = ofRandomuf(); // will give a random number between 0 and 1
        
            if(r > 0.5){
                ofCircle(x, y, dotSize);
                float newX = x + cos(angle)*dotSize;
                float newY = y + sin(angle)*dotSize;
                seed2(dotSize*0.9f, angle - angleOffSetA, newX, newY); // changing the position of x and y each time
                
                
            } else {
                ofCircle(x, y, dotSize);
                float newX = x + cos(angle)*dotSize;
                float newY = y + sin(angle)*dotSize;
                seed2(dotSize*0.5f, angle - angleOffSetA, newX, newY);
                seed1(dotSize*0.7f, angle + angleOffSetB, newX, newY);
                seed2(dotSize*0.3f, angle - angleOffSetB, newX, newY);
                
            }
        
    }
    
    
}