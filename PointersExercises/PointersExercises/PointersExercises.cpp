// PointersExercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double* smaller(double *a, int x)
{
	double* position;
	double smaller = 0;

	for (size_t i = 0; i < x; i++)
	{
		if (*(a + i)<smaller)
		{
			smaller = *(a + i);
			position = a + i;
		}
	}
	
	return position;
}

int bigger(int a, int b)
{
	return a > b ? a : b;
}

int smaller2(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	int(*f) (int a, int b);
	f = bigger;
	f(3, 2);
	std::cout << f(3, 2) << std::endl;
}





