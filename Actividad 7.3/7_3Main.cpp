/*************************** MAIN.cpp *****************************/


#include <iostream>
#include "Time.h" // Time class definition
#include "Runner.h"
#include <algorithm>

using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(Runner *arr, int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j].getTime() > arr[j + 1].getTime())
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break
		if (swapped == false)
			break;
	}
}
void printArray(Runner *arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int totalRunners;
	
	cout << "How many runners entered the race?" << endl;
	cin >> totalRunners;

	Runner * myRunner = new Runner[totalRunners];
	int n;

	for( int i = 0; i < totalRunners ; i ++)
		{
				
		cin >> myRunner[i];
		
						
		}

	
	

	bubbleSort(myRunner, totalRunners);
	printArray(myRunner, totalRunners);

	
	


	

	return 0;
} // end main