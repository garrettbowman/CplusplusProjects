/*
	1) Create bananas class with accessor and mutator functions
	2) Define the mutator and accessor functions
	3) Create bananas array to store all the banana objects
	-fill this array with test case data
	4) Create cheapest banana function to find cheapest banana
	5) use the functions to output test case.

	Last updated on 03-02-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class Bananas{
public:
	// making accessor and mutator functions to access private variables
	double getPrice();
	char getID();
	void setPrice( double newPrice);
	void setID( char newID);

private:
	char ID;
	double price;
};

//prototyping cheapestbanana function
Bananas cheapestBanana(Bananas arrBanan[], int size);

int main()
{
	//initialize variables
	int size = 3;
	int cheap;
	//declare bananas as an object
	Bananas arr[3]{};
	arr[0].setID('A');
	arr[0].setPrice(1.94);
	arr[1].setID('B');
	arr[1].setPrice(1.03);
	arr[2].setID('C');
	arr[2].setPrice(2.07);
	//for loop outputting all the ID and price values
	for (int i = 0; i < size; i++) {
		cout << "Banana " << arr[i].getID() << " costs $" << arr[i].getPrice() << endl;
	}

	//calling cheapest banana function to fill in values of cheapest banana 
	cout << "The cheapest banana is Banana " << cheapestBanana(arr,size).getID()<< " for $" << cheapestBanana(arr, size).getPrice() << endl;
	return 0;
}

Bananas cheapestBanana(Bananas arrBanan[], int size)
{
	//this for loop returns the cheapest banana in array
	Bananas cheap = arrBanan[0];
	for (int i = 0; i < size; i++) {
		if (arrBanan[i].getPrice() < cheap.getPrice())
			cheap = arrBanan[i];
	}
	return cheap;
}
//defining accessor and mutator functions
double Bananas::getPrice()
{
	return price;
}

char Bananas::getID()
{
	return ID;
}

void Bananas::setPrice(double newPrice)
{
	price = newPrice;
}

void Bananas::setID(char newID)
{
	ID = newID;
}
