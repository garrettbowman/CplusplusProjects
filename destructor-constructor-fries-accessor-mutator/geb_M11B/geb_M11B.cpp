/*
	1) create fries class
		-default and custom constructor
		-destructor
		-private pointer variable
		-accessor and mutator functions
	2) define functions 
	3) prompt user for inputs to set price to test our functions and pointer variables.
	4)destruct fries object to save memory.
	Last updated on 04-08-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;
class Fries {
public:
	Fries();
	Fries(double _price);
	~Fries();
	double getPrice() const;
	void setPrice(double* _price);
private:
	double* price;
};

int main()
{
	//intialize fries object and displaying default price
	Fries fries1;
	cout << "The default price of fries is: $" << fries1.getPrice() << endl;

	//promput user for price
	cout << "How much would you like to charge for fries? ";
	double userPrice;
	cin >> userPrice;
	cout << "Setting Price... " << endl;
	double* newPrice = new double(userPrice);
	fries1.setPrice(newPrice);

	//displaying price
	cout << "The price of fries was set to: $" << fries1.getPrice() << "!" <<endl;

	//prompt user for new price
	cout << "What would you like to change price of fries to? ";
	double userPrice2;
	cin >> userPrice2;
	// setting and displaying new price
	double* newPrice2 = new double(userPrice2);
	fries1.setPrice(newPrice2);
	cout << "The price of fries has changed to: $" << fries1.getPrice() << "!" << endl;
	return 0;
}

//default constructor pointing to nullptr
Fries::Fries()
	:price(nullptr)
{
}
//custom constructor assigning price
Fries::Fries(double _price)
{
	price = new double(_price);
}
//destructor
Fries::~Fries()
{
	delete price;
	price = nullptr;
}
//accessor
double Fries::getPrice() const
{
	if (price == nullptr)
		return 0.0;
	return* price;
}
//mutator
void Fries::setPrice(double* _price)
{
	if (price == nullptr) {
		price = new double(*_price);
	}
	else
		*price = *_price;
}
