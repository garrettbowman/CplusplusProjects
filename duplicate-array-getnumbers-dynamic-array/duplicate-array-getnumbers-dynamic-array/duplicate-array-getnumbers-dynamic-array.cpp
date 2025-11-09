/*
	1) create function getnumbers
	2) create function duplicate
	3) create function print
	4) define functions
		-get user input
		-duplicate and expand dynamic array
		-print out new array
	Last updated on 04-06-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

int* getNumbers(int* size);

int* duplicate(int arr[], int size, int numCopy);

void print(int arr[], int size);

int main()
{
	//get user input for numbers
	cout << "How many elements would you like to enter?";
	int num = 0;
	cin >> num;

	//get user input with getNumbers
	int* enteredArray = getNumbers(&num);
	
	//get user input for number of copies to make
	cout << "How many duplicated numbers do you want? ";
	int numCopy = 0;
	cin >> numCopy;

	//create dupicated array
	int* modifiedArray = duplicate(enteredArray, num, numCopy);

	//display result calling print()
	print(modifiedArray, num * numCopy);

	//deallocate dynamic arrays
	delete[] enteredArray;
	delete[] modifiedArray;
	enteredArray = nullptr;
	modifiedArray = nullptr;


	return 0;
}
//prompting user for numbers to be deleted.
int* getNumbers(int* size)
{
	if (*size == 0) {
		return nullptr;
	}
	else {
		cout << "Enter " << *size << " integers: \n";
		int* oriArray = new int[*size];
		for (int i = 0; i < *size; i++) {
			cin >> oriArray[i];
		}
		return oriArray;
	}
}
//duplicating array numbers and expanding
int* duplicate(int arr[], int size, int numCopy)
{
	int* modArray = new int[size * numCopy];
	new int[size * numCopy];
	for (int i = 0; i < size; i++) {
		for(int j =i *numCopy;j < (i+1)*numCopy; j++)
		{ 
			modArray[j] = arr[i];
		}
	}
	return modArray;
}
//printing array
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
}
