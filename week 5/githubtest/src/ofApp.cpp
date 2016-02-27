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
void ofApp::pentogon(int px1, int py1, int px2, int py2, int px3, int py4, int px5, int py5){
    //Line 1
    ofLine(px1, py1, px2, py2);
    //Line 2
    ofLine(px2, py2, px3, py3);
    //Line 3
    ofLine(px3, py3, px4, py4);
    //Line 4
    ofLine(px4, py4, px5, py5);
    //Line 5
    ofLine(px5, py5, px1, py1);
}


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
    pentogon(px1, py1, px2, py2, px3, py4, px5, py5);
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
