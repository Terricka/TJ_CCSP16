#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // load in sounds:
    ws.load("ws.mp3");
    
    // the fft needs to be smoothed out, so we create an array of floats
    // for that purpose:
    fftSmoothed = new float[8192];
    for (int i = 0; i < 8192; i++){
        fftSmoothed[i] = 0;
    }
    
    nBandsToGet = 256;
    
    ws.play();


}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofBackground(0,0,0);
    
    // update the sound playing system:
    ofSoundUpdate();
    
    // (5) grab the fft, and put in into a "smoothed" array,
    //		by taking maximums, as peaks and then smoothing downward
    float * val = ofSoundGetSpectrum(nBandsToGet);		// request 128 values for fft
    for (int i = 0;i < nBandsToGet; i++){
        
        // let the smoothed calue sink to zero
        fftSmoothed[i] *= 0.96f;
        
        // take the max, either the smoothed or the incoming:
        if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];
        
    }
    
   // ws.play();
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float width = (float)(3*250) / nBandsToGet;
    
    
    // quad 2
    for (int i = 0;i < nBandsToGet; i++){
        // (we use negative height here, because we want to flip them
        // because the top corner is 0,0)
        
        ofDrawRectangle(ofGetWidth()/2+i*width,ofGetHeight()/2,width,-(fftSmoothed[i] * 100));
    }
    
    // quad 1
    
    for (int i = 0;i < nBandsToGet; i++){
        // (we use negative height here, because we want to flip them
        // because the top corner is 0,0)
        ofDrawRectangle(ofGetWidth()/2-i*width,ofGetHeight()/2,width,-(fftSmoothed[i] * 100));
    }
    
    // quad 3
    
    for (int i = 0;i < nBandsToGet; i++){
        // (we use negative height here, because we want to flip them
        // because the top corner is 0,0)
        ofDrawRectangle(ofGetWidth()/2-i*width,ofGetWidth()/2-128,width,+(fftSmoothed[i] * 100));
    }
    
    // quad 4
    
    for (int i = 0;i < nBandsToGet; i++){
        // (we use negative height here, because we want to flip them
        // because the top corner is 0,0)
        ofDrawRectangle(ofGetWidth()/2+i*width,ofGetWidth()/2-128,width,+(fftSmoothed[i] * 100));
    }
    
    
    for(int i = 0;i < nBandsToGet; i++){
        ofNoFill();
        ofSetCircleResolution(100);
        ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, (fftSmoothed[i] * 100), (fftSmoothed[i] * 100));
    }
    
    for(int i = 0;i < nBandsToGet; i++){
        ofNoFill();
        ofSetCircleResolution(100);
        ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, (fftSmoothed[i] * 200), (fftSmoothed[i] * 200));
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
