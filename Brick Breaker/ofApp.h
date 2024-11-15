#pragma once

#include "ofMain.h"
#define N_MAX  50

class ofApp : public ofBaseApp {

public:

	//Member Variables

	ofRectangle bricks[N_MAX][N_MAX];
	ofColor brickColors[N_MAX][N_MAX];
	bool isVisible[N_MAX][N_MAX];

	int nXBricks;
	int nYBricks;

	float xMin, yMin, xMax, yMax;
	float* xStep;
	float* yStep;

	ofPoint ball;
	ofColor ballColor;

	int vxBall;
	int vyBall;

	ofRectangle paddle;
	ofColor paddleColor;


	//Methods

	void resetGame();
	void checkForCollisions();
	void setUpBricks();
	void setUpColors();
	void updateBallPosition();

	float* getUniformSamples(int n, float min, float max, float *step);

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

};
