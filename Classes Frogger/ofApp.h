#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:

		//Member Variables

		int* yLines;
		int nLines;

		float lineSpacing;

		ofRectangle player;
		ofColor playerColor;

		ofRectangle* cars;
		ofColor* carColors;
		int nCars;
		int* vCar;

		ofImage frog;
		ofImage car;

		ofSoundPlayer crash;


		//Methods

		int* getEvenlySpacedLines(int n, int spacing);
		ofRectangle setRectangle(int x_in, int y_in, int w_in, int h_in);
		ofColor setColor(int r_in, int g_in, int b_in);
		bool checkIntersections(int n, ofRectangle player, ofRectangle* cars);


		void printRectangle(ofRectangle r);






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
