/*
1. Get user input 
	-month 1-12
	-get days in month 28 29 30 31
	-get start day 0-6
2. Make calendar
3. Print calendar
	Last updated on 01-26-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	char repeat = 'y';
	while (repeat == 'y') {
		//get inputs from user
		int  days = 0, startDay = 0;
		char month;
		cout << "Enter a month (1 to 12): ";
		cin >> month;

		cout << "Enter days in month (28, 29, 30, or 31): ";
		cin >> days;

		cout << "Enter a start day (0 to 6): ";
		cin >> startDay;

		//Print calendar month / days
		switch (month) {
		case '1':
			cout << "January \n";
			break;
		case '2':
			cout << "Febuary\n";
			break;
		case '3':
			cout << "March\n";
			break;
		case '4':
			cout << "April\n";
			break;
		case '5':
			cout << "May\n";
			break;
		case '6':
			cout << "June\n";
			break;
		case '7':
			cout << "July\n";
			break;
		case '8':
			cout << "August\n";
			break;
		case '9':
			cout << "September\n";
			break;
		case '10':
			cout << "October\n";
			break;
		case '11':
			cout << "November\n";
			break;
		case '12':
			cout << "December\n";
			break;
		}

		cout << " --- --- --- --- --- --- ---\n";
		cout << " Sun Mon Tue Wed Thr Fri Sat\n";
		cout << " --- --- --- --- --- --- ---\n";

		//printing number of spaces 4 width
		for (int i = 1; i <= startDay; i++) {
			cout << setw(4) << " ";

		}
		///if day + startday divisible by 7 then time for new line
		for (int b = 1; b <= days; b) {
			int c = startDay + b;
			if (c % 7 == 0) {
				cout << setw(4) << b++ << endl;
			
			}
			else {
				cout << setw(4) << b++;
			}
		}

			cout << "\n";
			cout << "Do you want to make another calendar? (y/n) ";
			cin >> repeat;
		}

		cout << "Goodbye!";
		return 0;
	}