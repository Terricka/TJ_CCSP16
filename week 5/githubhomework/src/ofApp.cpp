#include "ofApp.h"


// this is terricka's function











// this is binna's


























// this is merillee's functions
void ofApp::drawTriangle(){
    int x1 = ofGetWidth()/2;
    int y1 = ofGetHeight()/2 - 200;
    int x2 = ofGetWidth()/2 + 200;
    int y2 = ofGetHeight()/2 + 200;
    int x3 = ofGetWidht()/2 -200;
    int y3 = ofGetHeight()/2 -200;
    float r = ofRandom(255);
    float g = ofRandom(255);
    float b = ofRandom(255);
    ofSetColor(r,b,g);
    ofTriangle(x1,y1,x2,y2,x3,y3);
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


    drawTriangle();
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
