#pragma once
#include <iostream>
using namespace std;


class FloatArray
{
public:
	//Member Variables
	int numel;
	int capacity;
	float* array;

	//Methods
	FloatArray();

	FloatArray(int capacity_in);

	FloatArray(int numel_in, float* data);

	void getRandArray(int numel_in, float min, float max);

	void push_back(float value);

	void pop_back();

	void insertAtK(int k, float value);

	void deleteAtK(int k);

	float getMax();

	float getMin();

	int getMaxIndex();

	int getMinIndex();

	void reverse();

	void sort();

	void copy(int numel_in, float *data);

	FloatArray getValuesInRange(float min, float max);

	FloatArray getValuesLessThan(float max);

	FloatArray getValuesGreaterThan(float min);

	void scale(float factor);

	void addTo(float factor);

	float getSum();

	float getAve();

	void print(string label);
	
private:
	void swap(float* a, float* b);

};

