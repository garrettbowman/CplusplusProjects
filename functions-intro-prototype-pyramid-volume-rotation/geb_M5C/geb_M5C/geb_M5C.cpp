/*
	1)prototype the 2 functions
	2)write 2 functions
	3)declare and initilaize variables
	4)print rotate print rotate print

	Last updated on 02-10-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

void rotate(int& var1, int& var2, int& var3, int& var4, int& var5);
void printNums(int var1, int var2, int var3, int var4, int var5);


int main()
{
	// declare initialize variables
	int var1 = 11;
	int var2 = 22;
	int var3 = 33;
	int var4 = 44;
	int var5 = 55;

	cout << "Original Numbers:" << endl;
	//call function to print original numbers
	printNums(var1, var2, var3, var4, var5);

	//call function to rotate numbers
	rotate(var1, var2, var3, var4, var5);
	cout << "After one rotation:" << endl;
	//call function to print results
	printNums(var1, var2, var3, var4, var5);
	//rotating numbers + printing again
	rotate(var1, var2, var3, var4, var5);
	cout << "After another rotation:" << endl;
	printNums(var1, var2, var3, var4, var5);


	return 0;
}

void rotate(int& var1, int& var2, int& var3, int& var4, int& var5)
{
	//creating temp variable to save var5
	int temp = var5;
	var5 = var4;
	var4 = var3;
	var3 = var2;
	var2 = var1;
	var1 = temp;
}
void printNums(int var1, int var2, int var3, int var4, int var5)
{
	//printing numbers with commas and brackets
	cout << "[ " << var1 << ", " << var2 << ", " << var3 << ", " << var4 << ", " << var5 << " ]" << endl;
}

