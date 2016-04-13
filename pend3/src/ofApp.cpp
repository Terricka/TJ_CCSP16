#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofSetColor(255);// set color drawing color to white
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2); // move initital drawing postion to the center of the screen
    
    amplitude = ofGetHeight()/2;
    period = ofGetWidth()/5;


}

//--------------------------------------------------------------
void ofApp::update(){
    
    pos = ofPoint(ofGetElapsedTimef()*period + ofGetWidth()/2, amplitude*sin(ofGetElapsedTimef()) + ofGetHeight()/2);
    
    
    for(int i = 0; i < ofGetWidth()/2; i++ ){
       
        x=x+2;
        
    }
    
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){

        


    float angle = (2*PI)/20;
    float x=cos(angle)*radius + ofGetWidth()/2;
    float y=sin(angle)*radius + ofGetHeight()/2+200;
    
    ofSetColor(255);
    ofNoFill();
    ofDrawCircle(pos.x, pos.y, 25);

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
