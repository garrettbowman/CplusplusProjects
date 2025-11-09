/*
	1) create pizza class
		-2 protected variables
		-default constructor
		-2  pure virtual functions
	2) create deep dish class
		-default constructor
		-2  pure virtual functions
	3)regular class
		-default constructor
		-2  pure virtual functions
	4) define functions
	5)test case hardcoded data
	Last updated on 04-20-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//create base class
class Pizza {
protected:
	int top;
	int size;
public:
	Pizza();
	virtual void getInput() = 0;
	virtual void getTotal() const = 0;
};

//create deepdish class
class DeepDishPizza : public Pizza{
public:
	DeepDishPizza();
	void getInput()  override;
	void getTotal() const override;
};

//create deepdish class
class RegularPizza : public Pizza{
public:
	RegularPizza();
	void getInput()  override;
	void getTotal() const override;
};


int main()
{
	//initializing objects
	RegularPizza r;
	DeepDishPizza d;
	
	cout << "Deep Dish Pizza:\n";
	//get user input
	d.getInput();
	//display total
	d.getTotal();
	cout << "\n";
	cout << "Original Pizza:\n";
	//get user input
	r.getInput();
	//display total
	r.getTotal();



	return 0;
}

//default contructor
Pizza::Pizza()
	:top(0), size(0)
{
}

//defaut constructor
DeepDishPizza::DeepDishPizza()
	:Pizza()
{
}
//getting user input
void DeepDishPizza::getInput() 
{
	int usize, utop;
	cout << "Enter a size (8 or 12 inches):";
	cin >> usize;

	if (usize != 8 && usize != 12) {
		do {
			cout << "Invalid entry.\n";
			cout << "Enter a size (8 or 12 inches):";
			cin >> usize;
		} while (usize != 8 && usize != 12);
	}
	cout << "Enter the number of toppings:";
	cin >> utop;
	size = usize;
	top = utop;
}
//printing total
void DeepDishPizza::getTotal() const
{
	double total;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	total = 2.5 * size + .5 * top;
	cout << "Total: $" << total << endl;
}
//defualt contructor
RegularPizza::RegularPizza()
	:Pizza()
{
}
//getting user input
void RegularPizza::getInput() 
{
	int usize, utop;
	cout << "Enter a size (8, 12, 14 or 16 inches):";
	cin >> usize;
	if (usize != 8 && usize != 12 && usize != 14 && usize != 16) {
		do {
			cout << "Invalid entry.\n";
			cout << "Enter a size (8, 12, 14 or 16 inches):";
			cin >> usize;
		} while (usize != 8 && usize != 12 && usize != 14 && usize != 16);
	}
	cout << "Enter the number of toppings:";
	cin >> utop;
	size = usize;
	top = utop;
}
//printing total
void RegularPizza::getTotal() const
{
	double total;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);    
	cout.precision(2);
	total = 1.5 * size + .5 * top;
	cout <<"Total: $" << total <<endl;
}
