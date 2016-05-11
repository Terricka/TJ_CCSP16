#include "ofApp.h"


string ofApp::ofxGetSerialString(ofSerial &serial, char until) {
    static string str;
    stringstream ss;
    char ch;
    int ttl=1000;
    while ((ch=serial.readByte())>0 && ttl-->0 && ch!=until) {
        ss << ch;
    }
    str+=ss.str();
    if (ch==until) {
        string tmp=str;
        str="";
        return ofxTrimString(tmp);
    } else {
        return "";
    }
}


//@add 2015/10/20 ########################################
// trim right trailing spaces
string ofApp::ofxTrimStringRight(string str) {
    size_t endpos = str.find_last_not_of(" \t\r\n");
    return (string::npos != endpos) ? str.substr( 0, endpos+1) : str;
}


//@add 2015/10/20 ########################################
// trim left trailing spaces
string ofApp::ofxTrimStringLeft(string str) {
    size_t startpos = str.find_first_not_of(" \t\r\n");
    return (string::npos != startpos) ? str.substr(startpos) : str;
}


//@add 2015/10/20 ########################################
// trim trailing spaces
string ofApp::ofxTrimString(string str) {
    return ofxTrimStringLeft(ofxTrimStringRight(str));;
}

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
     ofSetLogLevel(OF_LOG_VERBOSE);
   
    
    // load in sounds:
    ws.load("ws.mp3");
    feel.load("feel.mp3");

    control.load("control.mp3");

    // the fft needs to be smoothed out, so we create an array of floats
    // for that purpose:
    fftSmoothed = new float[8192];
    for (int i = 0; i < 8192; i++){
        fftSmoothed[i] = 0;
    }
    
    nBandsToGet = 256;
    
    ws.play();
    
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_VERBOSE);
    serial.listDevices();
    vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();

    int baud = 9600;
    serial.setup(0, baud); //open the first device
    
    readTime = 0;
    serialString = "";


    testString = "350, 200, 700";
    testString2 = "accel 150, 900, 340";
    
    
    stringTest = ofIsStringInString(testString2, "accel ");

    cout << stringTest << endl;
    
    if (stringTest){

       // ofTrimFront(testString2, "accel");
        
        
        
        result = ofSplitString(testString2, "accel ");
        
        
        
        accel = ofSplitString(result[1], ",");
        
        cout << accel[0] << endl;

        
        
    }
    
    
    
    
    int r;
    int g;
    int b;
    


}

//--------------------------------------------------------------
void ofApp::update(){
    
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
    
    serialTest = serial.available();
    
    
    if (serialTest) {
        cout << "blahh" << endl;
    }
    
    //@add 2015/10/20 ########################################
    serialString = "";
    serialString = ofxGetSerialString(serial,'\n'); //read until end of line
    if (serialString.length() > 0) {
        readTime = ofGetElapsedTimef();
        ofLogVerbose() << "serialString = " << serialString << "\n";
    }

}

void ofApp::draw(){
    
    
    float width = (float)(3*250) / nBandsToGet;
    
    ofSetColor(0);
    
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
    
    if(key == '1'){
        feel.play();
        ws.stop();
        control.stop();
    }
    
    if(key == '2'){
        control.play();
        ws.stop();
        feel.stop();
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
