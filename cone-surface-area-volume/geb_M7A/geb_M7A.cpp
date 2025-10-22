/*
	This program calculates and displays the surface area and volume of a cone

	Pseudocode:
	1) Create a class called cone
	2) Prompt user for dimensions of cone
	3) Create a cone object and use mutators to assign variables to it
	4) use acessors to echo the variables the user wanted
	5) Use the formula to calculate and output the results

	Last updated on 03-02-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class Cone {
public:
	double getRadius();
	double getHeight();
	void setRadius(double new_radius);
	void setHeight(double new_height);

	double surfaceArea();
	double volume();

private:
	double radius;
	double height;

};


int main()
{
	//declare core an object
	Cone c1;

	//prompt user for dimensions
	cout << "Enter the dimensions of a cone (radius and height), seperated by a space: ";
	double radius, height;
	cin >> radius >> height;


	//assign values using mutators
	c1.setRadius(radius);
	c1.setHeight(height);

	//display user inputs calling accessors and surface area and volueme of come
	cout << "You entered a cone with a radius of " << c1.getRadius() << " meters and a height of " << c1.getHeight() << " meters.\n";
	cout << "The surface area of the cone is: " << c1.surfaceArea() << endl;
	cout << "The volume of the cone is: " << c1.volume() << endl;

	return 0;
}

double Cone::getRadius()
{
	return radius;
}
double Cone::getHeight()
{
	return height;
}
void Cone::setRadius(double new_radius) 
{
	radius = new_radius;
}
void Cone::setHeight(double new_height) 
{
	height = new_height;
}

double Cone::surfaceArea() 
{
	double area = 3.14159 * radius * (radius + sqrt(height * height + radius * radius));
	return area;
}
double Cone::volume() 
{
	double vol = 3.14159 * radius * radius * height / 3;
	return vol;
}
