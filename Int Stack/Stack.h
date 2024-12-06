#pragma once
#include <iostream>
using namespace std;

class Stack
{
public:

private:
	int n;
	int capacity;
	int* data;

public:
	Stack();
	Stack(int maxCapacity);
	Stack(int n_in, int* data_in);
	void push(int value);
	int pop();
	int getData(int* output);
	void push(int n, int* data_in);
	int getN();
	int getCapacity();
	void print(string label);


};
