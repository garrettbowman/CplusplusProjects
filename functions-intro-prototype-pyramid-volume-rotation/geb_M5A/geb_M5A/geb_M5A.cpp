/*
	1)prototype functions getnumbers multipy and print
	2)call getnumbers by reference prompt user for integer and decimal
	3)multiply them w function and return reult by reference
	4)print result

	Last updated on 02-11-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

void getNumbers(int& num1, double& num2);
void multiply(int num1, double num2, double& result);
void print(int num1, double num2, double result);

int main()
{
	// declare initialize variables
	int num1 = 0;
	double num2 = 0, result = 0.0;

	//call function to get user input
	getNumbers(num1, num2);

	//call function to multiply numbers
	multiply(num1, num2, result);

	//call function to print results
	
	print(num1, num2, result);
	return 0;
}
//call by reference to update numbers in main
void getNumbers(int& num1, double& num2)
{
	cout << "Enter an integer and a floating point number, seperated by a space: ";
	cin >> num1 >> num2;
}
void multiply(int num1, double num2, double& result) 
{
	result = num1 * num2;
}

void print(int num1, double num2, double result)
{
	cout << num1 << " x " << num2 << " = " << result << endl;

}