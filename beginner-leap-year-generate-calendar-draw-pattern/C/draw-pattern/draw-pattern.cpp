/*
	1.get input from user
		-type
		-size
	2. calculate the 4 types drawing
		
	3. display the drawing

	I had to put {} around cases because I was getting a compiling error.

	Last updated on 01-26-2021 by GEB
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	char repeat = 'y';
	while (repeat == 'y') {
		int size = 0;
		char type;
		cout << "Enter the type of the pattern (1-4): ";
		cin >> type;
		cout << "Enter the size of the pattern (1-9): ";
		cin >> size;

		switch (type) {

		case '1':
		{
			int a = 0, b = 0;
			while (a < size) {
				while (b <= a) { //int b is printing hashes until it reaches value of a
					cout << "#";
					b++;
				}
				//resetting b for next row
				b = 0;
				//increasing a for next row
				a++;
				cout << endl;
			}
			break;
		}

		case '2':
		{
			for (int i = size; i >= 1; --i)//i decreases by 1 each time until it equals 1
			{
				for (int j = 1; j <= i; ++j)// printing # until j reaches i
				{
					cout << "#";
				}
				cout << endl;
			}

			break;
		}

		case '3':
		{
			int p = 0;
			int q = 0;
			int r = 0;

			while (p < size) {

				//  spaces
				while (r < p) {
					cout << " ";
					r++;
				}

				// put back at zero for next line
				r = 0;
				//hash symbols
				while (q <= (size - p - 1)) {
					cout << "#";
					q++;
				}

				// put back at zero for next line
				q = 0;
				p++;
				cout << endl;
			}
			break;
		}
		case '4':
		{
			int x = 0, y = 0, z = 0;
			while (x < size) {

				//  spaces
				while (z <= (size - x - 1)) {
					cout << " ";
					z++;
				}

				z = 0;
				//hash symbols 
				while (y <= x) {
					cout << "#";
					y++;
				}
				y = 0;
				x++;
				cout << endl;

			}
			break;

		}

		}
		cout << "Do you want to draw another pattern (y/n)? "<< endl;
		cin >> repeat;
		cout << " \n";
		
	}
	cout << "Goodbye!\n";
	return 0;
}