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

void ofApp::stripePattern() {
    ofSetColor(ofColor::black);
    ofSetLineWidth(2.0);
    ofNoFill();
    for (int i=-50; i<50; i++) {
        ofPushMatrix();
        ofTranslate( i*20, 0);
        ofRotate( i*5 );
        //ofLine( 0, -100, 0, 100);
        ofScale( 6, 6);
        ofTriangle( 0, 0, -50, 100, 50, 100);
        ofPopMatrix();
        
    }
    
}











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
    
    //binna
    ofPushMatrix();
    ofTranslate(  ofGetWidth()/2, ofGetHeight()/2);
    //---
    stripePattern();
    //---
    ofPopMatrix();
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
