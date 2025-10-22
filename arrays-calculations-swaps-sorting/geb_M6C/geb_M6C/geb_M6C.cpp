/*
	1)prototype functions
	2)initialize variables and array
	3)prompt user for inputs
	4)sort and display swap iterations
	5)display number of swaps it took to complete process

	Last updated on 02-23-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

//prototype functions
void fill(int userArray[], int size);
void print(int userArray[], int size);
void swap(int& min, int& high);
void sort(int userArray[], int size, bool order);

using namespace std;

int main()
{
	//initialize variables
	int size = 0;
	const int MAX = 10;
	int userArray[MAX];
	bool order = true;
	char o1 = 'i';
	int swapCount = 0;
	//prompt user about how  many elements and desired acending or descending
	cout << "How many elements in your array [up to 10]: ";
	cin >> size;
	cout << "Enter " << size << " integers seperated by spaces:" << endl;
	fill(userArray, size);
	cout << "\nYou entered the array: " << endl;
	print(userArray, size);
	cout << "Sort in [i]ncreasing or [d]ecreasing? ";
	cin >> o1;
	if (o1 != 'i') {
		order = false;
	}
	//calling sort function which will print rest of function.
	sort(userArray, size, order);

	return 0;
}
void fill(int userArray[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> userArray[i];
	}
}
	void print(int userArray[], int size) {
	for (int i = 0; i < size; i++) {
		cout << userArray[i] << " ";
	}
	cout << endl;
}
	//saving min value in temp variable and then swapping
void swap(int& min, int& high) {
	int temp = 0;
	temp = min;
	min = high;
	high = temp;

}
void sort(int userArray[], int size, bool order) {
	int x, i, j, min, high, swapCount = 0;
	if (order == true) {
		for (x = 0; x < 5; x++) {//to make sure a number can move all the way across array.
			for (i = 0; i < size - 1; i++) {// running through variables one by one, if 2nd > 1st then swapping
				for (j = i + 1; j < size; j++) {
					if (userArray[j] < userArray[i]) {
						high = userArray[j];
						min = userArray[i];
						swap(min, high); //swapping values
						userArray[i] = min;//resassigning them in correct position
						userArray[j] = high;
						swapCount++;
						print(userArray, size);
					}
				}
			}
		}
	}
	else {
		for (x = 0; x < 5; x++) {
			for (i = 0; i < size - 1; i++) {
				for (j = i + 1; j < size; j++) {
					if (userArray[j] > userArray[i]) {//only thing that is different is less than became greater than
						high = userArray[j];
						min = userArray[i];
						swap(min, high);
						userArray[i] = min;
						userArray[j] = high;
						swapCount++;
						print(userArray, size);
					}
				}
			}


		}
		
	}//displaying number of swaps.
	cout << "Our array was sorted in " << swapCount << " swaps";
}