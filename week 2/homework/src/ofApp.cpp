#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    balls.name = "ballin";
    r = ofRandom(0, 255);
    g = ofRandom(100, 255);
    b = ofRandom(200, 255);
    ofBackground(r, g, b);

    
    for (int i=0; i < numballs; i++){
        arrayOfBalls[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    myBalls.move();
    
    for (int i=0; i < numballs; i= i+1){
        arrayOfBalls[i].move();
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    balls.backwards();
    balls.stop();
    balls.go();

    myBalls.display();
    for (int i=0; i < numballs; i= i+1){
        arrayOfBalls[i].display();
    }

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
    balls.go();
    
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
