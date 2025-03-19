#include "ofApp.h"

//Circle Functions
void ofApp::drawCircles(int n, ofPoint* circle, int* radii, ofColor* circleColors)
{
	
}
ofPoint* ofApp::getNCoordinates(int n, int xmin, int xmax, int ymin, int ymax)
{
	
}
int* ofApp::getNRadii(int n, int min, int max)
{
	
}
ofColor* ofApp::getNColors(int n)
{
	
}
ofPoint* ofApp::getNVelocities(int n, int vxMin, int vxMax, int vyMin, int vyMax)
{
	
}
void ofApp::updateCircles(int n, ofPoint* circles, ofPoint* velocities)
{
	
}


//Rectangle Functions
ofRectangle* ofApp::getNNonIntersectingRectangles(int n, ofPoint xyMin, ofPoint xyMax, ofPoint whMin, ofPoint whMax)
{
	
}
ofPoint* ofApp::getNRandomPoints(int n, ofPoint xyMin, ofPoint xyMax)
{
	
}

ofRectangle ofApp::getRandomRectangle(ofPoint xyMin, ofPoint xyMax, ofPoint whMin, ofPoint whMax)
{
	ofRectangle r;
	int xMin = xyMin.x;
	int yMin = xyMin.y;
	int xMax = xyMax.x;
	int yMax = xyMax.y;
	int wMin = whMin.x;
	int wMax = whMax.x;
	int hMin = whMin.y;
	int hMax = whMax.y;

	
	return r;
}
void ofApp::checkIfCircleInsideRegions(int nCircles, int nRegions, ofPoint* circles, ofRectangle* regions, ofPoint* vCircles, ofPoint* deltaV)
{
	
}
void ofApp::drawRectangles(int n, ofRectangle* r, ofColor* c)
{
	
}





//--------------------------------------------------------------
void ofApp::setup(){

	
}

//--------------------------------------------------------------
void ofApp::update(){



}

//--------------------------------------------------------------
void ofApp::draw(){

	


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
