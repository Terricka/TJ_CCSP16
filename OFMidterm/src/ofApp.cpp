#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofBackground(0,0,0);
//    me.xMouse = mouseX;
//    me.yMouse = mouseY;
//    me.circleH = 25;
//    me.circleW = 25;
//    me.circleSize = ofRandom(100);
    me.radius = 200;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    // calling the function
//    me.drawCircles(ofGetWidth()/2, ofGetHeight()/2, me.radius);
    //me.drawCircles2(circleSize, mouseX, mouseY, circleW, circleH);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key=='p'){
        me.radius = me.radius + 10;
 me.drawCircles(ofGetWidth()/2, ofGetHeight()/2, me.radius);
        cout << "this is happening" << endl;
    }

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
