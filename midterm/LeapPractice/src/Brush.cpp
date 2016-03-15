//
//  Brush.cpp
//  LeapPractice
//
//  Created by Terricka on 3/13/16.
//
//

#include "Brush.h"

void Brush::setup(){
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    leap.open();
    
    cam.setOrientation(ofPoint(-20, 0, 0));
    
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    
}

void Brush::update(){
    fingersFound.clear();
    
    simpleHands = leap.getSimpleHands();
    
    if( leap.isFrameNew() && simpleHands.size() ){
        
        leap.setMappingX(-230, 230, -ofGetWidth()/2, ofGetWidth()/2);
        leap.setMappingY(90, 490, -ofGetHeight()/2, ofGetHeight()/2);
        leap.setMappingZ(-150, 150, -200, 200);
        
        fingerType fingerTypes[] = {INDEX};
        
        for(int i = 0; i < simpleHands.size(); i++){
            for (int f=0; f<5; f++) {
                int id = simpleHands[i].fingers[ fingerTypes[f] ].id;
                ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp; // metacarpal
                ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip; // proximal
                ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip; // distal
                ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip; // fingertip
                fingersFound.push_back(id);
            }
        }
    }
    
    leap.markFrameAsOld();
    

    

    }
    

void Brush::draw(){
    cam.begin();
    
    ofPushMatrix();
    ofRotate(90, 0, 0, 1);
    ofSetColor(20);
    ofDrawGridPlane(800, 20, false);
    ofPopMatrix();
    
    //
      fingerType fingerTypes[] = {INDEX};
    //
      for(int i = 0; i < simpleHands.size(); i++){
    //        bool isLeft        = simpleHands[i].isLeft;
    //        ofPoint handPos    = simpleHands[i].handPos;
    //        ofPoint handNormal = simpleHands[i].handNormal;
    
    
    //      Coordinates for the Center of the hand
    //        ofDrawSphere(handPos.x, handPos.y, handPos.z, 20);
    //        ofSetColor(255, 255, 0);
    //        ofDrawArrow(handPos, handPos + 100*handNormal);
    
    
     for (int f=0; f<5; f++) {
                ofPoint mcp = simpleHands[0].fingers[ fingerTypes[f] ].mcp;  // metacarpal
                ofPoint pip = simpleHands[0].fingers[ fingerTypes[f] ].pip;  // proximal
                ofPoint dip = simpleHands[0].fingers[ fingerTypes[f] ].dip;  // distal
       ofPoint tip = simpleHands[0].fingers[ fingerTypes[f] ].tip;  // fingertip
         
//         for (int f=0; f<5; f++) {
//             ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp;  // metacarpal
//             ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip;  // proximal
//             ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip;  // distal
//             ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip;  // fingertip
    
    
    // colors and coordinates for the spheres/finger joints
    //            ofSetColor(0, 255, 0);
    //            ofDrawSphere(mcp.x, mcp.y, mcp.z, 12);
    //            ofDrawSphere(pip.x, pip.y, pip.z, 12);
    //            ofDrawSphere(dip.x, dip.y, dip.z, 12);
    //            ofDrawSphere(tip.x, tip.y, tip.z, 12);
    
    
    // colors and coordinates for finger lengths/lines
    //            ofSetColor(255, 0, 0);
    //            ofSetLineWidth(20);
    //            ofLine(mcp.x, mcp.y, mcp.z, pip.x, pip.y, pip.z);
    //            ofLine(pip.x, pip.y, pip.z, dip.x, dip.y, dip.z);
    //            ofLine(dip.x, dip.y, dip.z, tip.x, tip.y, tip.z);
    
    
    
    
    //}
    
    cam.end();
}
    
}
    
}

//void Brush::paintbrush() {
//    
//    
//    
//}
//
//void Brush::paint() {
//    
//}