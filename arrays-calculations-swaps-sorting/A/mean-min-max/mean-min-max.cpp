/*
	1) prototype functions
	2)define function fill mean min max
	3)propt user for size of array
	4)prompt user to fill array using function fill
	5)display values of mean min max using functions 

	Last updated on 02-23-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//function protoypes
void fill(double userArray[], int size);
double mean(double userArray[], int size);
double min(double userArray[], int size);
double max(double userArray[], int size);
int main()
{
	const int MAX_CAP = 50;
	double numbers[MAX_CAP];
	int size;
	//prompt user for size
	cout << "Enter the size you like to make for your array, up to 50:";
	cin >> size;

	//have user fill array
	fill(numbers, size);

	//display mean min max

	cout << "The mean of the array is: " << mean(numbers, size) << endl;
	cout << "The min value of the array is: " << min(numbers, size) << endl;
	cout << "The max value of the array is: " << max(numbers, size) << endl;
	
	return 0;
}

//defining functions
void fill(double userArray[], int size) 
{
	for (int i = 0; i < size; i++) {
		cout << "Enter the value of arr[" << i << "]: ";
		cin >> userArray[i];
	}
}
double mean(double userArray[], int size)
{
	double total = 0;
	for (int i = 0; i < size ; i++) {
		total = total + userArray[i];
	}
	double m = total / size;
	return m;
}
double min(double userArray[], int size)
{
	double smallest = userArray[0];
	for (int i = 1; i < size; i++) {
		if (userArray[i] < smallest)
			smallest = userArray[i];
	}
	return smallest;
}
double max(double userArray[], int size)
{
	double greatest = userArray[0];
	for (int i = 1; i < size; i++) {
		if (userArray[i] > greatest)
			greatest = userArray[i];
	}
	return greatest;
}