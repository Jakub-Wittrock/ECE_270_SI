#pragma once
#include<iostream>
#include <string>
#include "ofColor.h"
#include "ofMain.h"
using namespace std;


class myCircle
{
public:
	int x;
	int y;
	int r;

	ofColor color;

	myCircle();
	myCircle(int x_in, int y_in, int r_in);
	myCircle(int x_in, int y_in, int r_in, ofColor color_in);

	void set(int x_in, int y_in, int r_in);
	void set(int x_in, int y_in, int r_in, ofColor color_in);
	void randSet(int xMin, int xMax, int yMin, int yMax, int rMin, int rMax);
	

	void drawCircle();
	void print(string label);

	bool intersects(myCircle other);



private:




};

