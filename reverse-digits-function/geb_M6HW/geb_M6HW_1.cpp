/*
	(1) Prototype functions
	(2) Define reverse digit functions
	- get rid of 0s at end of number
	-find remainder when divided by 10
	- save remainder
	- divide original number by 10 then find remainder 10 again
	- multiply first remainder *10 and add new remainder to it
	- divide original number by 10
	- repeat
	(3)prompt user for input positive integer with input validation
	(4)run function to produce reversed number
	(5)ask user to repeat

	Last updated on 02-27-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

int reverseDigits(int num1);

int main()
{
	char repeat = 'y';
	while (repeat == 'y') {
		//initialize variables
		int num1 = 0;
		int rev = 0;

		//prompt user for input positive integer with input validation
		cout << "Enter a positive integer: ";
		cin >> num1;
		if (num1 <= 0) {
			do {
				cout << "Enter a positive integer: ";
				cin >> num1;
			} while (num1 <= 0);
		}
		cout << "The number with reversed digits: ";

		//run function to produce reversed number
		rev = reverseDigits(num1);
		cout << rev << endl;

		//ask user to repeat
		cout << "Would you like to enter a new number ? (y/n) ";
		cin >> repeat;
	}
	//exiting
	cout << "Thank you for using this program. Good bye!";

	return 0;
}

int reverseDigits(int num1) {
	//getiing rid of 0s at end of number
	int updated = 0;
	if (num1 % 10 == 0) {
		do {
			num1 /= 10;

		} while (num1 % 10 == 0);
	}
	//math of reversing number. reversed number is stored in updated variable
	while (num1 > 0) {
		int rev1 = 0;
		rev1 = num1 % 10;
		num1 = num1 / 10 ;
		updated = updated * 10 + rev1;
	}

	return updated;
}
