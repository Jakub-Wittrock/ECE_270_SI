#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:

		//----------------------------------------------------------------------------------------------
		//Variables
		//----------------------------------------------------------------------------------------------
		
		//Grid
		float* xGrid;
		float* yGrid;
		int nGrid;

		//Function Samples
		float* x;
		int n;
		float* cosSamples;
		float* sinSamples;
		float* linearSamples;
		float* quadraticSamples;
		float* normalSamples;


		//----------------------------------------------------------------------------------------------
		//Functions 
		//----------------------------------------------------------------------------------------------
		int getUniformSamples(float* array, float min, float max, float step);
		void printFloatArray(int n, float* array, char* label);
		float map(float value, float inMin, float outMin, float inMax, float outMax);
		void mapArray(int n, float* array, float inMin, float outMin, float inMax, float outMax);
		void getCosineSamples(int n, float* in, float* out);
		void getSineSamples(int n, float* in, float* out);
		void getLinearSamples(int n, float* in, float* out, float m, float b);
		void getQuadraticSamples(int n, float* in, float* out, float a, float b, float c);
		void getNormalDistributionSamples(int n, float* x, float* samples, float mu, float sigma);
		float getSum(int n, float* array);
		float getAverage(int n, float* array);
		float getStandardDeviation(int n, float* array);

		void drawLine(int n, float* x, float* y,int lineWidth, int r, int g, int b);
		void drawGrid(int n, float* x, float* y, int screenWidth, int screenHeight);

		float getMin(int n, float* arr);
		float getMax(int n, float* arr);



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
