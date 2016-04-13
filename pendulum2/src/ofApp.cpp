#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    int cw = ofGetWidth()/2;
    int ch = ofGetHeight()/2;
    int amp = 150;
    int accel = 25;

    pos0 = ofPoint(512, 300);
    pos = ofPoint(ofGetWidth()/2, ofGetHeight()/2+250);

    amplitude = ofGetHeight()/2;
    period = ofGetWidth()/3;
}

//--------------------------------------------------------------
void ofApp::update(){
 
    pos = ofPoint(ofGetElapsedTimef()*period + ofGetWidth()/2, amplitude*sin(ofGetElapsedTimef()) + ofGetHeight()/2);
    
    sine = sin(ofGetElapsedTimef());
    
    
   

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(-ofGetWidth()/2,-ofGetHeight()/2);
    
    ofEllipse(pos.x, pos.y, 25, 25);
    


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
