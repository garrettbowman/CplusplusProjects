/*
	1)Declare variables
	2)Prompt a user which program they want to use
	3)Calculate the fibonacci sequence
	4)display either the sequence up to n terms or nth term of sequence.
	5)ask if user wants to run program again

	Last updated on 02-02-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	// declare variables
	int num1 = 0, num2 = 0;
	int j = 0;
	int k = 1;
	int output = 0;

	char repeat = 'y';
	while (repeat == 'y') {
		//resetting variables
		int type = '0';
		output = 0, num1 = 0, num2 = 0, j=0,  k = 1;

		cout << "Welcome to the Fibonacci Sequence Generator! \n(1) Generate a Fibonacci Sequence \n(2) Find the nth number of a Fibonacci Sequence \n";
		//input validation
		do {
			cout << "Choose an option (Enter 1 or 2) ";
		cin >> type;
		} while (type < 1 || type > 2);
		//case 1 generate sequence of n length
		if (type == 1) {
			cout << "Enter the number of a Fibonacci sequence to be generated: ";
			//user input
			cin >> num1;

			for (int i = 1; i <= num1; ++i) {
				// first 2 terms are different than rest of sequence
				if (i == 1) {
					cout << j << ", ";
					continue;
				}
				if (i == 2) {
					cout << k << ", ";
					continue;
				}
				//adding the 2 terms and then displaying result
				output = j + k;
				j = k;
				k = output;//updating one to be the sum of initial two

				if (i == num1) {//removing the comma from last term

					cout << output << " \n";
				}
				else {
					cout << output << ", ";
				}
			}



		}//case 2 
		if (type == 2) {
			cout << "Enter the nth element of a Fibonacci sequence to be calculated. F(n): ";
			int num2 = 0;
			cin >> num2;

			for (int i = 1; i <= num2; ++i) {
				//calculating the fibonacci sequence up to nth term

				output = j + k;
				j = k;
				k = output;
				//when i = n
				if (i == num2) {
					//display nth term
					cout << output << " \n";
				}

			}

		}
		//asking user to use program again
		cout << "Would you like to use the generator again (y/n)?";
		cin >> repeat;
		cout << "\n";
	}
	//exiting
	cout << "Thank you for using this program. Goodbye!";
	return 0;

}