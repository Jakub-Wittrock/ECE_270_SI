#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:



		//=====================================================
		//Member Variables
		//=====================================================
		
		
		//Circles
		ofPoint* circleCenters;
		int* radii;
		ofPoint* velocities;
		ofColor* circleColors;
		int nCircles;

		//Rectangles
		ofRectangle* regions;
		ofColor* rectangleColors;
		ofPoint* speedOffset;
		int nRectangles;
		


		//=====================================================
		//Methods 
		//=====================================================
		
		//Circle Functions
		void drawCircles(int n, ofPoint* circle, int* radii, ofColor* circleColors);
		ofPoint* getNCoordinates(int circleCenters, int xmin, int xmax, int ymin, int ymax);
		int* getNRadii(int n, int min, int max);
		ofColor* getNColors(int n);
		ofPoint* getNVelocities(int n, int vxMin, int vxMax, int vyMin, int vyMax);
		void updateCircles(int n, ofPoint* circles, ofPoint* velocities);
		

		//Rectangle Functions
		void drawRectangles(int n, ofRectangle *r, ofColor *c);
		ofRectangle* getNNonIntersectingRectangles(int n, ofPoint xyMin, ofPoint xyMax, ofPoint whMin, ofPoint whMax);
		ofPoint* getNRandomPoints(int n, ofPoint xyMin, ofPoint xyMax);
		ofRectangle getRandomRectangle(ofPoint xyMin, ofPoint xyMax, ofPoint whMin, ofPoint whMax);
		void checkIfCircleInsideRegions(int nCircles, int nRegions, ofPoint* circles, ofRectangle* regions, ofPoint* vCircles, ofPoint* deltaV);



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
