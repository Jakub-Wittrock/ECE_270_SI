#pragma once
#include <iostream>
#include "ofMain.h"
using namespace std;


class Circle 
{
public:

	//Member Variables

	ofPoint center;
	float radius;
	ofColor color;


	//Methods

	Circle();

	Circle(int x_in, int y_in, int r_in);

	Circle(int x_in, int y_in, int r_in, ofColor color_in);

	Circle(ofPoint center_in,int r_in);

	void set(int x_in, int y_in, int r_in);

	void set(int x_in, int y_in, int r_in, ofColor color_in);

	void set(ofPoint center_in, int r_in);

	void  getRandCircle(int xMin, int xMax, int yMin, int yMax, int rMin, int rMax);

	void setColor(ofColor color_in);

	void setColor(int r_in, int g_in,int b_in);

	void copy(Circle other);

	void print(string label);

	void draw();

	bool intersects(Circle other);

	bool intersects(int n, Circle* others);



};

