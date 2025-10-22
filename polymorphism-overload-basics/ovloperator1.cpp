/*
	This program compares sandwich sizes (non-member operator overloading)

	Pseudocode:
	(1) Create a class called Sandwiche with two private member variables for weight and size
		- set up the constructors and the accessor for weight
		- write a memeber function, print
	(2) Overload == (equal to) and > (greater than) as non-member function
	(3) In the main(),
		(3.1) instantiate a Sandwich object with defualt constructor and 4 more Sandwich objects with random hard-coded weights 
		(3.2) display each Sandwich object 
		(3.3) compare each Sandwich object by using the overloaded > and == and display results

   Last updated on 03-15-2021 by YB, KC
*/

#include <iostream>
using namespace std;

// define Sandwich class
class Sandwich {
	double weight;
	char size;
public:
	// default and custom constructors
	Sandwich();
	Sandwich(double weight);

	// accessor for non-member ovreloading
	double getWeight() const;

	// member function - print
	void print();
};

// non-member operator overloading (== and >) 
bool operator ==(const Sandwich& lhs, const Sandwich& rhs);
bool operator >(const Sandwich& lhs, const Sandwich& rhs);

int main() {	
	// declare objects 
	Sandwich s0, s1(251.5), s2(501), s3(354.3), s4(354.3);
	
	// print the default sandwich
	cout << "Default values for a Sandwich...\n";
	s0.print();

	cout << endl;	
	// print the other sandwiches 
	cout << "Sandwich 1\n"; s1.print();
	cout << "Sandwich 2\n"; s2.print();
	cout << "Sandwich 3\n"; s3.print();
	cout << "Sandwich 4\n"; s4.print();
	
	// compare s1 to s2
	cout << endl;
	if (s1 > s2) 
		cout << "Sandwich 1 is larger than Sandwich 2\n";
	else if (s1 == s2) 
		cout << "Sandwich 1 is the same size as Sandwich 2\n";
	else
		cout << "Sandwich 1 is smaller than Sandwich 2\n";
	
	// compare s3 to s4
	if (s3 > s4) 
		cout << "Sandwich 3 is larger than Sandwich 4\n";
	else if (s3 == s4)
		cout << "Sandwich 3 is the same size as Sandwich 4\n";
	else
		cout << "Sandwich 3 is smaler than Sandwich 4\n";
		   
	return 0;
}

// define default constructor 
Sandwich::Sandwich() 
	:weight(50), size('S') 
{}

// define a custom constructor with a weight 
Sandwich::Sandwich(double weight)
	: weight(weight)
{
	if (weight < 150)
		size = 'S';
	else if (weight < 300) 
		size = 'M';
	else if (weight < 500) 
		size = 'L';
	else
		size = 'X';
}

// define accessor for weight
double Sandwich::getWeight() const
{
	return weight;
}

// define ==
bool operator ==(const Sandwich& lhs, const Sandwich& rhs) {
	return lhs.getWeight() == rhs.getWeight();
}

// define >
bool operator >(const Sandwich& lhs, const Sandwich& rhs) {
	return lhs.getWeight() > rhs.getWeight();
}

// define print()
void Sandwich::print() {
	cout << "weight: " << weight << " grams, size: " << size << endl;
}