#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


//---------------------------------------
//Structs
//---------------------------------------
struct IntArray
{
	int* x;
	int currentIndex;
	int maxCapacity;
};

struct FloatArray
{
	int* x;
	int currentIndex;
	int maxCapacity;
};

struct IntPair
{
	int x;
	int y;
};
struct FloatPair
{
	float x;
	float y;
};
typedef struct IntArray IntArray;
typedef struct FloatArray FloatArray;
typedef struct IntPair IntPair;
typedef struct FloatPair FloatPair;


//---------------------------------------
//Function Prototypes
//---------------------------------------
IntArray setArray(int n);
IntArray* setArrayPtr(int n);

FloatArray setFloatArray(int n);
FloatArray *setFloatArrayPtr(int n);

IntPair setIntPair(int x, int y);
IntPair *setIntPairPtr(int x, int y);

FloatPair setFloatPair(float x, float y);
FloatPair *setFloatPairPtr(float x, float y);


IntArray getRandomArray(int n, int min, int max);
FloatArray getSamples(float min, float max, float step);

IntPair getMinMaxInt(IntArray arr);
FloatPair getMinMaxFloat(FloatArray arr);

float map(float value, FloatPair from, FloatPair to);
FloatArray mapArray(FloatArray arr, FloatPair from, FloatPair to);

void printIntArray(IntArray arr, char label[]);
void printFloatArray(FloatArray arr, char label[]);

IntArray reverseIntArr(IntArray arr);
FloatArray reverseFloatArr(FloatArray arr);

void appendInt(int value, IntArray *arr);
void appendFloat(float value, FloatArray *arr);

void removeLastInt(IntArray *arr);
void removeLastFloat(FloatArray *arr);

void copyIntArr(int n, int origin[], IntArray *destination);
void copyFloatArr(int n, float origin[], FloatArray *destination);

int linSearchInt(int target, IntArray arr);
int linSearchFloat(float target, FloatArray arr);

int isIncreasing(IntArray arr);



int main()
{

}

//---------------------------------------
// Function Definitions
//---------------------------------------
