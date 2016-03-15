#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    leap.open();
    
    cam.setOrientation(ofPoint(-20, 0, 0));
    
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);

}

//--------------------------------------------------------------
void ofApp::update(){
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

//--------------------------------------------------------------
void ofApp::draw(){
    
    
//    //gradient background
//    ofBackgroundGradient(ofColor(90, 90, 90), ofColor(30, 30, 30),  OF_GRADIENT_BAR);
    
    ofBackground(200, 30, 20);
    
    // text at the top of the string
    
    ofSetColor(200);
    ofDrawBitmapString("ofxLeapMotion - Example App\nLeap Connected? " + ofToString(leap.isConnected()), 20, 20);
    
    // color palette
    
    ofSetColor(255, 0, 0);
    ofSetCircleResolution(100);
    ofDrawEllipse(200, ofGetHeight()/5*4, 200, 200);
    
    ofSetColor(0, 255, 0);
    ofSetCircleResolution(100);
    ofDrawEllipse(515, ofGetHeight()/5*4, 200, 200);
    
    ofSetColor(0, 0, 255);
    ofSetCircleResolution(100);
    ofDrawEllipse(830, ofGetHeight()/5*4, 200, 200);
    
    
    
    
    cam.begin();
    
//    ofPushMatrix();
//    ofRotate(90, 0, 0, 1);
//    ofSetColor(20);
//    ofDrawGridPlane(800, 20, false);
//    ofPopMatrix();
    
    
    fingerType fingerTypes[] = {INDEX};
    
    for(int i = 0; i < simpleHands.size(); i++){
        bool isLeft        = simpleHands[i].isLeft;
        ofPoint handPos    = simpleHands[i].handPos;
        ofPoint handNormal = simpleHands[i].handNormal;
        
    
//      Coordinates for the Center of the hand
//        ofDrawSphere(handPos.x, handPos.y, handPos.z, 20);
//        ofSetColor(255, 255, 0);
//        ofDrawArrow(handPos, handPos + 100*handNormal);
        
        
        // tracking the index finger
        
        for (int f=0; f<5; f++) {
            ofPoint mcp = simpleHands[i].fingers[ fingerTypes[0] ].mcp;  // metacarpal
            ofPoint pip = simpleHands[i].fingers[ fingerTypes[0] ].pip;  // proximal
            ofPoint dip = simpleHands[i].fingers[ fingerTypes[0] ].dip;  // distal
            ofPoint tip = simpleHands[i].fingers[ fingerTypes[0] ].tip;  // fingertip
            
            
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
            
            
            
            //print finger coordinate to screen
            
            ofSetColor(0, 0, 0);
            ofDrawSphere(tip.x, tip.y, 50);
            
            
            
            
        }
        
        
        
        
    }
    cam.end();
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
