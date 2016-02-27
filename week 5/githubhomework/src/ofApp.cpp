#include "ofApp.h"


// this is terricka's function


void ofApp::drawCircle(){
    float diam = 30*ofGetElapsedTimef();
    
    int r = ofRandom(255);
    int g = ofRandom(255);
    int b = ofRandom(255);
    
    ofSetColor(255, g, b);
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), diam);
    ofSetColor(r, 255, b);
    ofNoFill();
    ofDrawSphere(ofGetMouseX(), ofGetMouseY(), diam);
    ofDrawLine(ofGetWidth()/2, ofGetWidth()/2, ofGetElapsedTimef(), ofGetElapsedTimef());
    
  // line 21
}








// this is binna's











// this is merillee's functions












               
               
//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    drawCircle();

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
    drawCircle();
    
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
