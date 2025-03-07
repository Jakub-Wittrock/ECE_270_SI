#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>
#define N_MAX 100


//------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------

int getRandNumber(int min, int max);

void getRandMatrix(int n, int m, int mat[][N_MAX], int min, int max);
void printMatrix(int n, int m, int mat[][N_MAX], char label[]);

int getSum(int n, int m, int mat[][N_MAX]);
float getAve(int n, int m, int mat[][N_MAX]);

float getRowSum(int row, int m, int mat[][N_MAX]);
float getRowAverage(int row, int m, int mat[][N_MAX]);

float getColSum(int col, int n, int mat[][N_MAX]);
float getColAverage(int col, int n, int mat[][N_MAX]);

int* getRow(int row, int m, int mat[][N_MAX]);
int* getColumn(int col, int n, int mat[][N_MAX]);

void replaceColumn(int col, int n, int *arr, int mat[][N_MAX]);
void replaceRow(int row, int m, int* arr, int mat[][N_MAX]);

void getSubMatrix(int start_row, int end_row, int start_col, int end_col, int n, int m, int in[][N_MAX], int out[][N_MAX]);

//------------------------------------------------------------------
// Main
//------------------------------------------------------------------


int main()
{

}

//------------------------------------------------------------------
// Function Definitions
//------------------------------------------------------------------



int getRandNumber(int min, int max)
{

}
//------------------------------------------------------
void getRandMatrix(int n, int m, int mat[][N_MAX], int min, int max)
{

}
//------------------------------------------------------
void printMatrix(int n, int m, int mat[][N_MAX], char label[])
{

}
//------------------------------------------------------
int getSum(int n, int m, int mat[][N_MAX])
{

}
//------------------------------------------------------
float getAve(int n, int m, int mat[][N_MAX])
{

}
//------------------------------------------------------
float getRowSum(int row, int m, int mat[][N_MAX])
{

}
//------------------------------------------------------
float getRowAverage(int row, int m, int mat[][N_MAX])
{

}
//------------------------------------------------------
float getColSum(int col, int n, int mat[][N_MAX])
{

}
//------------------------------------------------------
float getColAverage(int col, int n, int mat[][N_MAX])
{

}
//------------------------------------------------------
int* getRow(int row, int m, int mat[][N_MAX])
{

}
//------------------------------------------------------
int* getColumn(int col, int n, int mat[][N_MAX])
{

}
//------------------------------------------------------
void replaceColumn(int col, int n, int* arr, int mat[][N_MAX])
{

}
//------------------------------------------------------
void replaceRow(int row, int m, int* arr, int mat[][N_MAX])
{

}
//------------------------------------------------------
void getSubMatrix(int start_row, int end_row, int start_col, int end_col, int n, int m, int in[][N_MAX], int out[][N_MAX])
{

}
