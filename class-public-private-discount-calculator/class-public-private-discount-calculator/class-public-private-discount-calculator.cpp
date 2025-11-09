/*
	1) create Discount class
		-2 private variables, disc percent and item price
	2) create default and custom contructors
		-in custom constuctor, validating inputs to be within acceptable range, if not setting values to 0.
	3) make constant accessor functions for discount class
	4) create member function that calulates final price using the data in discount class
	5) get user inputs, validating with constructor
	6) create object using inputed values
	7) calculate and output final price
	8) ask user if they wish to repeat

	Last updated on 03-09-2021 by GEB
*/
#include <iostream>
#include <cmath>

using namespace std;

//make class Discount
class Discount
{
private:
	int discPer;
	double itemPr;
public:
	//constructors
	Discount();
	Discount(int _discPer, double _itemPr);
	//function to calc final price
	double calFinalPrice();
	//accessor constant functions
	int getPerc() const;
	double getPrice() const;
};

int main()
{
	char repeat = 'y';
	while (repeat == 'y')
	{
		//intialize variables
		int _discPer;
		double _itemPr;
		
		//creating d1 object
		Discount d1;

		//getting user inputs
		cout << "Enter the discount percentage (integer): ";
		cin >> _discPer;

		cout << "Enter the inital price: ";
		cin >> _itemPr;

		//assigning d1 anonymous object with custom constructor
		d1 = Discount(_discPer, _itemPr);
		//setting to 2 decimal places
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Here is the final price of your item: $" << d1.calFinalPrice() << endl;

		//asking user to if they want to repeat
		cout << "Would you like to try again (y/n)?";
		cin >> repeat;
	}
	//exiting program
	cout << "Thanks for using the discount calculator, Goodbye!";
	return 0;
}
//default constructor
Discount::Discount()
	: discPer(0), itemPr(0.00)
{}
//custom constructor
Discount::Discount(int _discPer, double _itemPr)
	: discPer(_discPer), itemPr(_itemPr)
{
	//validating inputs to be within acceptable range, if not setting values to 0.
	if ( _discPer < 0 || _discPer >100) {
		cout << "Invalid discount! Setting discount as 0..." << endl;
		discPer = 0;
	}
	if (_itemPr < 0 || _itemPr >100) {
		cout << "Invalid Item Price! Setting price as 0..." << endl;
		itemPr = 0.00;
	}
}
//final price function
double Discount::calFinalPrice()
{
	double realPerc = itemPr - (itemPr * (discPer * 0.01));
	return realPerc;
}
//constant accessor fxns
int Discount::getPerc() const
{
	return discPer;
}

double Discount::getPrice() const
{
	return itemPr;
}
