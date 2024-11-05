#include <iostream>
#include <string>

using namespace std;

//Helper Functions
int* getRandArray(int n, int min, int max);
void printArray(int n, int* arr, string label);

//DNA Problem

string getRandDna(int n);
string hideCharacter(string dna, char target);

//Bubble Sorting
void bubbleSort(int n, int* arr);
void swap(int* a, int* b);
void bubbleSort(int n, int* arr, char direction);

void bubbleSort(string *s);
void swap(char* a, char* b);

int main()
{
	srand(time(NULL));

	string dna = getRandDna(30);

	cout << endl << "DNA: " << dna;
	bubbleSort(&dna);
	cout << endl << "DNA: " << dna;
}


int* getRandArray(int n, int min, int max)
{
	//int* arr = (int*)malloc(n * sizeof(int));
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	return arr;
}
void printArray(int n, int* arr, string label)
{
	cout << endl << "Array labeled: " << label;
	cout << endl << "Size of array: " << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}

}

void bubbleSort(int n, int* arr)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if(arr[j] < arr[j - 1])
			{
				swap(&arr[j], &arr[j - 1]);
			}
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int n, int* arr, char direction)
{
	//direction = "a" "d"

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (direction == 'd')
			{
				if (arr[j] > arr[j - 1])
				{
					swap(&arr[j], &arr[j - 1]);
				}
			}
			else
			{
				if (arr[j] < arr[j - 1])
				{
					swap(&arr[j], &arr[j - 1]);
				}
			}
		}
	}
}


string getRandDna(int n)
{
	string dna = "";
	int die;

	for (int i = 0; i < n; i++)
	{
		die = rand() % 4;

		if (die == 0)
		{
			dna = dna + "A";
		}
		if (die == 1)
		{
			dna = dna + "C";
		}
		if (die == 2)
		{
			dna = dna + "G";
		}
		if (die == 3)
		{
			dna = dna + "T";
		}
	}
	return dna;
}

string hideCharacter(string dna, char target)
{
	string result = "";

	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == target)
		{
			result += ".";
		}
		else
		{
			result += dna[i];
		}
	}
	return result;
}



void bubbleSort(string *s)
{
	for (int i = 0; i < s->length(); i++)
	{
		for (int j = 1; j < s->length(); j++)
		{
			if ((*s)[j] < (*s)[j - 1])
			{
				swap((*s)[j], (*s)[j - 1]);
			}
		}
	}
}
void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
