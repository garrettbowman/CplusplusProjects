/*****************************************************************//**
 * \brief  Polymorphism (Multiplier, Tripler, Doubler)
 *
 * Psuedocode:
 * Psuedocode:
 * (1) Multiplier class
 *		pure virtual function to print
 *		member variables for size and array
 * (2) Tripler class
 *		virtual function to print
 * (3) Doubler class
 *		virtual function print
 * (4) Main
 * 		Make Multiplier pointer point to Tripler object and call print()
 *	    Make Multiplier pointer point to Doubler object and call print()
 * 
 * \author besta
 * \date   April 2021
 * \last updated KC
 *********************************************************************/

#include <iostream>
using namespace std;

// Multiplier class
class Multiplier
{
public:
	Multiplier();
	virtual void print() const = 0;

protected:
	int size;
	int* numArray;
};

// Tripler class
class Tripler : public Multiplier
{
public:
	Tripler(int arr[], int _size);
	void print() const override;

};

// Doubler class
class Doubler : public Multiplier
{
public:
	Doubler(int arr[], int _size);
	void print() const override;
};

// main
int main()
{
	int size;
	cout << "How many numbers would you like to enter? ";
	cin >> size;
	cout << "Enter " << size << " numbers separated by a space:\n";
	int* numArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> numArray[i];
	}
	
	Doubler d1(numArray, size);
	Multiplier* m1 = &d1;

	m1->print();

	Tripler t1(numArray, size);
	m1 = &t1;

	m1->print();

	delete[] numArray;
	numArray = nullptr;

	return 0;
}

// default constructor
Tripler::Tripler(int arr[], int _size)
{
	size = _size;
	numArray = new int[_size];
	numArray = arr;
	for (int i = 0; i < size; i++)
	{
		numArray[i] *= 3;
	}

}

// print function for Tripler
void Tripler::print() const
{
	cout << "Tripled Array: \n";
	for (int i = 0; i < size; i++)
	{
		cout << numArray[i] << " ";
	}
	cout << endl;
}

// default constructor for Doubler class
Doubler::Doubler(int arr[], int _size)
{
	
	size = _size;
	numArray = new int[_size];
	numArray = arr;
	for (int i = 0; i < size; i++)
	{
		numArray[i] *= 2;
	}
}

// print function for Doubler
void Doubler::print() const
{
	cout << "Doubled Array: \n";
	for (int i = 0; i < size; i++)
	{
		cout << numArray[i] << " ";
	}
	cout << endl;
}

// default constructor for Multiplier 
Multiplier::Multiplier()
	: size(0), numArray(nullptr)
{}
