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
	(3) Define isPalindrome 
	- takes reversed number and original number
	- if original number = reversed number then return true
	- else return false
	(4)prompt user for input positive integer with input validation
	(5)run function to produce reversed number
	(6)run inPalindrome to see if number is palindrome
	(7)tell user if its palindrome or not
	(8)ask user to repeat

	Last updated on 03-04-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//prototype functions
int reverseDigits(int num1);
bool isPalindrome(int num1, int rev);

int main()
{
	char repeat = 'y';
	while (repeat == 'y') {
		//initialize variables
		int num1 = 0;
		int rev = 0;
		bool truth = true;

		//prompt user for input positive integer with input validation
		cout << "Enter a positive integer: ";
		cin >> num1;
		if (num1 <= 0) {
			do {
				cout << "Enter a positive integer: ";
				cin >> num1;
			} while (num1 <= 0);
		}

		//run function to produce reversed number
		rev = reverseDigits(num1);
		//run inPalindrome to see if number is palindrome
		truth = isPalindrome(num1, rev);

		//tell user if its palindrome or not
		if (truth == true) {
			cout << "The number " << num1 <<  " is a palindrome." << endl;
		}
		else {
			cout << "The number " << num1 << " is not a palindrome." << endl;
		}

		//ask user to repeat
		cout << "Would you like to enter a new number ? (y/n) ";
		cin >> repeat;
	}
	//exiting
	cout << "Thank you for using this program. Good bye!";
	return 0;
}
//reverse digit function returning reversed number
int reverseDigits(int num1) {
	int updated = 0;
	if (num1 % 10 == 0) {
		do {
			num1 /= 10;

		} while (num1 % 10 == 0);
	}

	while (num1 > 0) {
		int rev1 = 0;
		rev1 = num1 % 10;

		num1 = num1 / 10;

		updated = updated * 10 + rev1;

	}

	return updated;
}
//if original number = reversed number then return true
bool isPalindrome(int num1, int rev) {
	if (rev == num1) {

		return true;
	}
	return false;
}