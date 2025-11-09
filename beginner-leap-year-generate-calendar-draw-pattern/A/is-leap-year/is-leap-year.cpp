/*
This is a program to check if a year is a leap year.

Pseudocode
1.Get user input
2. check if input is a leap year or not
-if input is divisible by 4, it is a leap year.
	-if input is divisible by 100
		-if input is divisible by 400
		  it is a leap year
		-if input not divisible by 400
			it is not a leap year
	  -if input is non divisible by 100
		it is a leap year
-if non divisible by 4, it not a leap year
	
3.display result
4.ask if user wants to run program again (y/n)

	Last updated on 01-26-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//declare variables
	int year = 1000;
	char repeat = 'y';

	while (repeat == 'y') {

		cout << "Enter a year: ";
		cin >> year;

		//check if year is a leap year or not

		if (year % 4 == 0) {
			if (year % 100 == 0) {
				if (year % 400 == 0) {
					cout << "Year " << year << " is a leap year.\n";
				}
				else {
					cout << "Year " << year << " is not a leap year.\n";
				}
			}
			else {
				cout << "Year " << year << " is a leap year.\n";
			}
		}
		else {
			cout << "Year " << year << " is not a leap year.\n";

		}


		//ask to use the program again
		cout << "Do you want to enter another year? (y/n) ";
		cin >> repeat ;
		cout << " \n";

		
	}

	cout << "Goodbye!\n";
	return 0;
}