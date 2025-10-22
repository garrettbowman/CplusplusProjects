/*
	1.Ask user which program they would like to use.
	2.Ask for either a binary number or a decimal number
	3.Calculate the transformation
	4.Display result
	5.Ask if the user would like to use the program again.

	Last updated on 02-02-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	//declare varibles
	int num1 = 0, i = 0, k = 0, num2 = 0, base= 1, soln = 0, remain = 0;
	int type = 1;
	//repeat 
	char repeat = 'y';
	while (repeat == 'y') {
		 int num1 = 1, num2 = 0, soln = 0, base = 1, i = 0, k = 0; //resetting variables
		 
		
		//prompt which program user wants to use
		cout << "Welcome to the Binary-Decimal Converter! \n(1) Convert Decimal to Binary \n(2) Convert Binary to Decimal \n";
		do {
			cout << "Choose an option (Enter 1 or 2) ";
			cin >> type;
		} while (type < 1 || type > 2);
		if (type == 1) {
			do {
				cout << "Enter a decimal number: ";
				cin >> num1;
			} while (num1 < 0);
			int orig1 = num1; // saving original number to output later
			cout << orig1 << " converted to binary is: ";
			while (num1 > 0) {
				k = num1 % 2; //remainder gives us digit of the binary number
				cout << k; //print the digit
				num1 = num1 / 2; // dividing by 2 gives us next number to find remainder of 
				
			}
			cout << " \n";

			
		}
		if (type == 2) {
			int num2 = 0;
			do {
				cout << "Enter a binary number: ";
				cin >> num2; //input from user
			} while (num2 % 10 > 1);
			int orig2 = num2; // saving original input

			while (num2 > 0)
			{
				remain = num2 % 10;  //if 1 then will give remainder 1, 0 if 0
				soln = soln + remain * base; //1 in previous line then will add 2 2^n starting with n=0
				base = base * 2;// increasing base by a factor of 2 each time
				num2 = num2 / 10; //moving to next digit of the binary number
			}
			//displaying result
			cout << orig2 << " converted to decimal is: " << soln << "\n";

		}
		//again?
		cout << "Would you like to use this program again (y/n)?";
		cin >> repeat;
		cout << "\n";
		
	}
	//exiting
	cout << "Thank you for using this program. Goodbye!\n";
	return 0;
}
