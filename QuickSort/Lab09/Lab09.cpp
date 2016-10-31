// Lab09.cpp: define el punto de entrada de la aplicación de consola.
//
//
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <time.h>
#include <ctime>

using namespace std;
int compare = 0;

int divide(int *array, int start, int end) {
	int left;
	int right;
	int pivot;
	int temp;

	pivot = array[start];
	left = start;
	right = end;

	while (left < right) {
		while (array[right] > pivot) {
			right--;
			compare++;
		}

		while ((left < right) && (array[left] <= pivot)) {
			left++;
			compare++;
		}

		if (left < right) {
			temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
	}

	temp = array[right];
	array[right] = array[start];
	array[start] = temp;

	return right;
}

void printArray(int a[], int length)
{
	cout << "\n";
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << ", ";
	}
	cout << "\n";

}

void quicksort(int *array, int start, int end)
{
	int pivot;

	if (start < end) {
		pivot = divide(array, start, end);

		// Ordeno la lista de los menores
		quicksort(array, start, pivot - 1);

		// Ordeno la lista de los mayores
		quicksort(array, pivot + 1, end);
	}
}

void bubbleSort(int a[], int start, int end)
{

}

void fillArrayWithRandom(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		a[i] = rand() % 100;
	}
}


void OperateTheArray(int arraySize){
	cout << "\n ";
	cout << "\n Using: " << arraySize << " elements in the array.";
	cout << "\n ";
	srand(time(NULL)); // initialize random with a seed
	//int a[] = {41,2,5,7,2,3,5,82,7,3,67,41,5,9,3,35,1};

	int *a = new int[arraySize]; //array with variable size

	clock_t start = clock(); //clock ticks
	clock_t end = start;


	fillArrayWithRandom(a, arraySize);
	cout << "\n ";
	cout << "\n Unsorted Array:";
	cout << "\n ";
	if (arraySize < 100){
		printArray(a, arraySize);
	}

	quicksort(a, 0, arraySize - 1);
	cout << "\n ";
	cout << "\n Sorted Array:";
	cout << "\n ";
	if (arraySize < 100){
		printArray(a, arraySize);
	}

	end = clock();
	cout << "\n ";
	cout << "\n                           +-----------------------------+";
	cout << "\n                                      Time:" << ((double)(end - start)) / CLOCKS_PER_SEC; // calculates seconds 
	cout << "\n                                 Comparisons needed: " << +compare;
	cout << "\n                           +-----------------------------+";
	cout << "\n ";
	delete a;
}

int main(int argc, char *argv[])
{
	cout << "\n                           +-----------------------------+";
	cout << "\n ";
	cout << "\n                            EXERCISE #1 Using quick sort";
	cout << "\n ";
	cout << "\n                           +-----------------------------+";
	cout << "\n ";
	OperateTheArray(10);
	cout << "\n ";
	cout << "\n Press 0 and start to continue";
	cout << "\n ";
	int b;
	cin >>b;
	cout << "\n ";
	cout << "\n Prossesing data, please wait a few seconds....";
	cout << "\n ";
	OperateTheArray(1000);
	cout << "\n ";
	cout << "\n Press 0 and start to continue";
	cout << "\n ";
	cin >> b;
	OperateTheArray(10000);
	cout << "\n ";
	cout << "\n Press 0 and start to finish the execution!";
	cout << "\n ";
	cin >> b;
}
