#include "ofApp.h"


int* ofApp::getEvenlySpacedLines(int n, int spacing)
{
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i * spacing;
	}


	return arr;
}
ofRectangle ofApp::setRectangle(int x_in, int y_in, int w_in, int h_in)
{

	ofRectangle rect;

	rect.x = x_in;
	rect.y = y_in;
	rect.width = w_in;
	rect.height = h_in;

	return rect;
}
ofColor ofApp::setColor(int r_in, int g_in, int b_in)
{
	ofColor color;

	color.r = r_in;
	color.g = g_in;
	color.b = b_in;

	return color;

}
bool ofApp::checkIntersections(int n, ofRectangle player, ofRectangle* cars)
{
	bool intersect = false;
	for (int i = 0; i < n; i++)
	{
		if (player.intersects(cars[i]))
		{
			intersect = true;
		}
	}
	return intersect;
}

void ofApp::printRectangle(ofRectangle r)
{
	cout << endl << "X: " << r.x;
	cout << endl << "Y: " << r.y;
	cout << endl << "W: " << r.width;
	cout << endl << "H: " << r.height;
}
//--------------------------------------------------------------
void ofApp::setup(){

	srand(time(NULL));
	ofSetBackgroundColor(255, 255, 255);

	
	//Set up player
	player.set(500, 900, 100, 100);
	playerColor.set(255, 255, 255);

	//Set up lanes
	nLines = 10;
	yLines = getEvenlySpacedLines(nLines, 100);

	//Set up cars
	nCars = 8;
	cars = new ofRectangle[nCars];
	carColors = new ofColor[nCars];
	vCar = new int[nCars];

	for (int i = 0; i < nCars; i++)
	{
		cars[i].set(rand() % 901, yLines[i + 1], 100, 100);
		carColors[i].set(rand() % 256, rand() % 256, rand() % 256);
		printRectangle(cars[i]);
		vCar[i] =  rand() % (11);
	}


	//Set up images
	car.load("car.jpg");
	frog.load("frog.jpg");

	//Set up the crash sound effect 
	crash.load("crash.mp3");
	

}

//--------------------------------------------------------------
void ofApp::update(){


	for (int i = 0; i < nCars; i++)
	{
		if (cars[i].x + vCar[i] < 0 || cars[i].x + vCar[i] > 900)
		{
			vCar[i] = -vCar[i];
		}
		cars[i].x = cars[i].x + vCar[i];
	}

	if (checkIntersections(nCars, player, cars))
	{
		crash.play();
		player.x = 500;
		player.y = 900;
	}




}

//--------------------------------------------------------------
void ofApp::draw(){


	//Draw lines
	ofFill();
	ofSetColor(0, 0, 0);
	for (int i = 0; i < nLines; i++)
	{
		ofDrawLine(0, yLines[i], 1000, yLines[i]);
	}


	//Draw player
	ofFill();
	ofSetColor(playerColor);
	ofDrawRectangle(player);
	frog.draw(player);

	//Draw the cars

	for (int i = 0; i < nCars; i++)
	{

		ofSetColor(carColors[i]);
		ofDrawRectangle(cars[i]);
		car.draw(cars[i]);
	}


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if (key == OF_KEY_UP)
	{
		player.y = player.y - 100;
	}
	if (key == OF_KEY_DOWN)
	{
		player.y = player.y + 100;
	}
	if (key == OF_KEY_LEFT)
	{
		player.x = player.x - 50;
	}
	if (key == OF_KEY_RIGHT)
	{
		player.x = player.x + 50;
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
