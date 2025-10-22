/*
	1)prototype overloaded pyrVol fxns
	2)create repeat while loop
	3)initalize variables
	4)obtain type and dimesnions
	5)use functions to calc volume
	6)display volume
	7)ask to repeat

	Last updated on 02-11-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//prototype functions

double pyrVol(double x, double y, double z);
double pyrVol(double x, double y);
int main()
{
	//ask for repeat
	char repeat = 'y';
	while (repeat == 'y')
	{
		// declare initialize variables
		double x = 0.0, y = 0.0, z= 0.0;
		char type = 's';
		double rectVol = 0.0, sqVol = 0.0;
		//get pyramid type input
		cout << "Please enter 's' for square pyramid or 'r' for rectangular: ";
		cin >> type;
		//retangle pyramid
		if (type == 'r')
		{
			cout << "Please enter a length, width and height, seperated by spaces.";
			cin >> x >> y >> z;
			//calling 3 var function
				rectVol = pyrVol(x, y, z);
			//output
			cout << "The volume of the pyramid whose attributes you entered is: ";
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(3);
			cout << rectVol << endl;
		}
		//square pyramid
		else
		{
			cout << "Please enter a length and a height seperated by a space.";
			cin >> x >> y;
			//calling 2 var function
			sqVol = pyrVol(x, y);
			//output
			cout << "The volume of the pyramid whose attributes you entered is: ";
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(3);
			cout << sqVol << endl;
		}
		//asking user to repeat program
		cout << "Would you like to continue using this program?";
		cin >> repeat;
	}
	//exiting
	cout << "Thank you for using the pyramid volume calculator. Bye!";
	return 0;
}

double pyrVol(double x, double y, double z)
{
	//do the maths
	return (x * y * z) / 3;
}
double pyrVol(double x , double y )
{
	//do the maths again
	return (x * x * y) / 3;
}
