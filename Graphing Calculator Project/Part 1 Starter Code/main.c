#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.14159265359


int getUniformSamples(float* array, float min, float max, float step);
void printFloatArray(int n, float* array, char* label);


float map(float value, float inMin, float outMin, float inMax, float outMax);
void mapArray(int n, float* array, float inMin, float outMin, float inMax, float outMax);


void getCosineSamples(int n, float* in, float* out);
void getSineSamples(int n, float* in, float* out);

void getLinearSamples(int n, float* in, float* out, float m, float b);
void getQuadraticSamples(int n, float* in, float* out, float a, float b, float c);

void getNormalDistributionSamples(int n, float*x, float *samples,float mu, float sigma);

float getSum(int n, float* array);
float getAverage(int n, float* array);
float getStandardDeviation(int n, float* array);



int main()
{
	

}


int getUniformSamples(float* array, float min, float max, float step)
{
	
}
void printFloatArray(int n, float* array, char* label)
{
	
}


float map(float value, float inMin, float outMin, float inMax, float outMax)
{
	
}
void mapArray(int n, float* array, float inMin, float outMin, float inMax, float outMax)
{
	
}


void getCosineSamples(int n, float* in, float* out)
{
	
}
void getSineSamples(int n, float* in, float* out)
{
	
}

void getLinearSamples(int n, float* in, float* out, float m, float b)
{
	
}
void getQuadraticSamples(int n, float* in, float* out, float a, float b, float c)
{
	
}

void getNormalDistributionSamples(int n, float* x, float* samples, float mu, float sigma)
{
	//y = (1/sigma * sqrt(2pi)) * e^(-(x-mu)^2/(2*sigma^2)

	
}

float getSum(int n, float* array)
{
	
}
float getAverage(int n, float* array)
{
	

}
float getStandardDeviation(int n, float* array)
{
	
}
