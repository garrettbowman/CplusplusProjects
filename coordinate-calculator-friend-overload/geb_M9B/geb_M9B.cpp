/*
	1) Create point class
		-2 private variables for x and y
		- default and custom constructor that initialize variables.
		- prototype 2 friend functions to overload >> and << operators
	2) define friend functions
	3) define constructors
	4)

	Last updated on 03-19-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//creating class
class Point 
{
public:
	//constructors
	Point();
	Point(double _x, double _y);
	//friend function protypes
	friend ostream& operator << (ostream& output, const Point& p);
	friend istream& operator >> (istream& input, Point& p);

private:
	double x;
	double y;
};


int main()
{
	//creating objects
	Point p1, p2;


	//assigning user inputs to anonymous object that gets assigned to p1 and p2
	cout << "Enter x and y coordinates for first point, seperated by space: ";
	cin >> p1;
	cout << "Enter x and y coordinates for second point, seperated by space: ";
	cin >> p2;
	
	//calling overloaded << to output values of p1 p2 object
	cout << "\n";
	cout << "First point is at " << p1 << endl;
	cout << "Second point is at " << p2 << endl;

	return 0;
}

//defining default constructor and initializing
Point::Point()
	:x(0), y(0)
{
}
//definining custom costructor and initializing 
Point::Point(double _x, double _y)
	:x(_x), y(_y)
{
}
//overloading << and >> so we can use them with our object
ostream& operator<<(ostream& output, const Point& p)
{
	output <<"(" <<  p.x << "," << p.y << ")" ;
	return output;
}

istream& operator>>(istream& input, Point& p)
{
	input >> p.x >> p.y;
	return input;
}
