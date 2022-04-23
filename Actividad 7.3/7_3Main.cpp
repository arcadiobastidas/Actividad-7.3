#include <iostream>#include "Time.h" // Time class definition
#include "Runner.h"
#include <algorithm>
using namespace std;

int main()
{
	Time t; // create Time object
	
	int totalRunners;
	int* min = nullptr;
	cout << "How many runners entered the race?" << endl;
	cin >> totalRunners;

	Runner * myRunner = new Runner[totalRunners];

	for( int i = 0; i < totalRunners ; i ++)
		{
				
		cin >> myRunner[i];
		

				
		}


	 
	


	

	return 0;
} // end main