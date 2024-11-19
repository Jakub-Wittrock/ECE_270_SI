#include "FloatArray.h"



//Constructors
FloatArray::FloatArray()
{

}

FloatArray::FloatArray(int maxElements)
{

}
FloatArray::FloatArray(float* arr_in, int numel_in, int maxElements_in)
{

}

//Set Methods
void FloatArray::setName(string name)
{

}

void FloatArray::getUniformSamples(float min, float max, float step)
{

}
void FloatArray::getRandomArray(int n, float min, float max)
{
	//min + ((float) rand() / (float) RAND_MAX) * (max - min + 1);

}

void FloatArray::append(int n, float* origin)
{

}
void FloatArray::append(FloatArray origin)
{

}

void FloatArray::insertNewElement(float value)
{

}
void FloatArray::deleteLastElement()
{

}

void FloatArray::insertAtIndexK(int k, float value)
{

}
void FloatArray::deleteAtIndexK(int k)
{

}

//Get Methods

int FloatArray::getNumel()
{

}
int FloatArray::getMaxElements()
{

}
string FloatArray::getName()
{

}

//Helper Methods

void FloatArray::printArray()
{

}

void FloatArray::bubbleSort()
{

}
void FloatArray::mapArray(float inMin, float outMin, float inMax, float outMax)
{

}

void FloatArray::scale(float value)
{

}
void FloatArray::addValue(float value)
{

}

float FloatArray::getMax()
{

}
int FloatArray::getMaxIndex()
{

}
float FloatArray::getMin()
{

}
int FloatArray::getMinIndex()
{

}
int FloatArray::getMedian()
{

}

float FloatArray::getAve()
{

}
float FloatArray::getStdDev()
{

}

int FloatArray::find(float target)
{

}

int FloatArray::countValuesInRange(float min, float max)
{

}
FloatArray FloatArray::getValuesInRange(float min, float max)
{

}

float FloatArray::dotProduct(FloatArray other)
{

}


//Helper functions

void swap(float* a, float* b)
{

}
void map(float inMin, float outMin, float inMax, float outMax)
{

}
