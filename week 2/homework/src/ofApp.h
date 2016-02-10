#pragma once

#include "ofMain.h"
#include "balls.h"
#define numballs 25

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
    
    
    int r, g, b;
		
    
    //*** HOMEWORK ***//
    
    // create 3 shapes using 3 functions
    // create a class and do something visual
    
    Balls balls;
    Balls myBalls;
    Balls arrayOfBalls[numballs];
    
};
