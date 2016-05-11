#pragma once

#include "ofMain.h"
#include "ofEvents.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    ofSoundPlayer 		ws;
    ofSoundPlayer 		feel;
    ofSoundPlayer       control;
    ofSerial	serial;
    
    float 				* fftSmoothed;
    // we will draw a rectangle, bouncing off the wall:
    float 				px, py, vx, vy;
    
    int nBandsToGet;
    float prevx, prevy;
    
    int fft;
    
    int r,g,b;
    
    string testString;
    string testString2;
    
    ofTrueTypeFont		font;
    
    bool stringTest;
    bool serialTest;
    
    vector <string> accel;
    vector <string> result;
    
    string ofxGetSerialString(ofSerial &serial, char until);
    string ofxTrimStringRight(string str);
    string ofxTrimStringLeft(string str);
    string ofxTrimString(string str);
    
    float           readTime;           // when did we last read?
    string          serialString;


};
