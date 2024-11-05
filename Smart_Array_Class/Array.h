#pragma once
#include <iostream>
using namespace std;


class Array
{
	//-------------------------------------------
	//Member Variables
	//-------------------------------------------

public:

	float* arr;
	int numel;
	int maxElements;

	string name;

private:

	//-------------------------------------------
	//Methods
	//-------------------------------------------

public:

	//Constructors
	Array();
	Array(int maxElements);
	Array(float* arr_in, int numel_in, int maxElements_in);

	//Set Methods
	void setName(string name);

	void getUniformSamples(float min, float max, float step);
	void getRandomArray(int n, float min, float max);

	void append(int n, float* origin);
	void append(Array origin);

	void insertNewElement(float value);
	void deleteLastElement();

	void insertAtIndexK(int k, float value);
	void deleteAtIndexK(int k);

	//Get Methods

	int getNumel();
	int getMaxElements();
	string getName();

	//Helper Methods

	void printArray();

	void bubbleSort();
	void mapArray(float inMin, float outMin, float inMax, float outMax);

	void scale(float value);
	void addValue(float value);

	float getMax();
	int getMaxIndex();
	float getMin();
	int getMinIndex();
	int getMedian();

	float getAve();
	float getStdDev();

	int find(float target);

	int countValuesInRange(float min, float max);
	Array getValuesInRange(float min, float max);

	float dotProduct(Array other);


private:

	void swap(float* a, float* b);
	void map(float inMin, float outMin, float inMax, float outMax);

};

