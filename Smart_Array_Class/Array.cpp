#include "Array.h"


//Constructors
Array::Array()
{

}

Array::Array(int maxElements)
{

}
Array::Array(float* arr_in, int numel_in, int maxElements_in)
{

}

//Set Methods
void Array::setName(string name)
{

}

void Array::getUniformSamples(float min, float max, float step)
{

}
void Array::getRandomArray(int n)
{

}

void Array::append(int n, float* origin)
{

}
void Array::append(Array origin)
{

}

void Array::insertNewElement(float value)
{

}
void Array::deleteLastElement()
{

}

void Array::insertAtIndexK(int k, float value)
{

}
void Array::deleteAtIndexK(int k)
{

}

//Get Methods

int Array::getNumel()
{

}
int Array::getMaxElements()
{

}
string Array::getName()
{

}

//Helper Methods

void Array::printArray()
{

}

void Array::bubbleSort()
{

}
void Array::mapArray(float inMin, float outMin, float inMax, float outMax)
{

}

void Array::scale(float value)
{

}
void Array::addValue(float value)
{

}

float Array::getMax()
{

}
int Array::getMaxIndex()
{

}
float Array::getMin()
{

}
int Array::getMinIndex()
{

}
int Array::getMedian()
{

}

float Array::getAve()
{

}
float Array::getStdDev()
{

}

int Array::find(float target)
{

}

int Array::countValuesInRange(float min, float max)
{

}
Array Array::getValuesInRange(float min, float max)
{

}

float Array::dotProduct(Array other)
{

}


//Helper functions

void swap(float* a, float* b)
{

}
void map(float inMin, float outMin, float inMax, float outMax)
{

}
