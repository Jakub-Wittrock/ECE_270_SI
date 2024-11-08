#pragma once

#include "ofMain.h"
#include "C:\\ECE-270\\of_v0.12.0_vs_release\\apps\\myApps\\circleClassAndAgario\\myCircle.h"

class ofApp : public ofBaseApp{

	public:

		myCircle* food;
		ofColor* foodColor;
		bool* visible;

		int nFood;

		myCircle player;
		ofColor playerColor;
		int playerMovementSpeed;



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
		
};
