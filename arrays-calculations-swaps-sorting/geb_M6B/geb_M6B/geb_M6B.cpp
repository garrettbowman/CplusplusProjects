/*
	1) prototype functions
	2)initalize variables
	3) prompt user for inputs
	4) display original array
	5) run deleteNumbers which uses isRepeat bool function
	6) display new array
	Last updated on 02-23-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//Prototype functions
void fill(int userArray[], int size);
bool isRepeat(int userArray[], int size, int targ);
void deleteNumbers(int userArray[], int& size);
void print(int userArray[], int size);


int main()
{
	// initialize variables
	int size = 0;
	const int MAX_CAP = 25;
	int userArray[MAX_CAP];
	bool eq = false;

	cout << "Enter the number of elements in your array: (1-25)";
	cin >> size;
	if (size < 1 || size > 25) {
		do {
			cout << "Invalid Entry!" << endl;
			cout << "Enter the number of elements in your array: (1-25)";
			cin >> size;

		} while (size < 1 || size > 25);
		
	}
	fill(userArray, size);
	//printing the original entered array
	cout << endl <<  "Array Entered: ";
	print(userArray, size);
	
	//printing the new array without repeated values
	deleteNumbers(userArray, size);
	cout << "\nArray with repeated numbers deleted: ";
	print(userArray, size);
	return 0;
}

void fill(int userArray[], int size)
{
	cout << "Enter " << size << " numbers:\n";
		for (int i = 0; i < size; i++) {
			cin >> userArray[i];

		}
}
bool isRepeat(int userArray[], int size, int targ)
{
	for (int k = 0; k <= size; ++k) {
		if (userArray[k] == targ ) {
			return true;
		}

	}

	return false;
}
void deleteNumbers(int userArray[], int& size)
{
	int j, targ;
	bool eq;
	//starting at 1 because first is always unique
	for (int i = 1; i < size; ++i) {
		targ = userArray[i];
		int index = i;
		eq = isRepeat(userArray, size, targ);
		if (eq == true) {
			//rewriting rest of array to skip value
			for (int j = i; j < size - 1; j++) {
				userArray[j] = userArray[j + 1];

			}
			//do not do for last term
			if (i != size - 1) {
				size = size - 1;
				
			}
			
		}
		
	}
	
}
void print(int userArray[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << userArray[i] << " ";
	}
}