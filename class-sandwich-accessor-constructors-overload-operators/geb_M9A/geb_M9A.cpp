/*
	1) class Sandwich
	-2 private variables
	-custom and default constructors
	-accessor for weight
	-function to print values of sandwich
	2) define constructors, accessors and print function
	3)overload operators with non member functions
	-has to use accessor because not a member or friend of class.
	4) test with hardcoded values

	Last updated on 03-16-2021 by GEB
*/
#include <iostream>

using namespace std;

//define sandwich class
class Sandwich {
private:
	double weight;
	char size;

public:
	Sandwich();
	Sandwich(double _weight);
	double getWeight() const;
	void print();

};

//non member operatior overloading (== and >)
bool operator == (const Sandwich& lhs, const Sandwich& rhs);
bool operator > (const Sandwich& lhs, const Sandwich& rhs);


int main()
{
	//hardcoding test data
	Sandwich s0, s1(251.5), s2(502), s3(354.3), s4(354.3);
	cout << "Default values of a Sandwich...\n";
	s0.print();
	cout << "\n";
	//printing sandwich values
	cout << "Sandwich 1 \n"; s1.print();
	cout << "Sandwich 2 \n"; s2.print();
	cout << "Sandwich 3 \n"; s3.print();
	cout << "Sandwich 4 \n"; s4.print();

	cout << "\n";
	//outputting comparisons of objects , allowed by overload
	if (s1 > s2) {
		cout << "Sandwich 1 is greater than Sandwich 2\n";
	}
	else if (s1 == s2)
		cout << "Sandwich 1 is same size than Sandwich 2\n";
	else
		cout << "Sandwich 1 is smaller than Sandwich 2\n";
	
	if (s3 == s4)
		cout << "Sandwich 3 is the same size than Sandwich 4\n";

	return 0;
}

//define default constructor
Sandwich::Sandwich()
	:weight(50), size('S')
{
}

//define custom constructor
Sandwich::Sandwich(double _weight)
	: weight(_weight)
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

//define accessor print
void Sandwich::print() 
{
	cout << "weight: " << weight << " , " << "size: " << size << endl;
}
//define == operator to work with sandwich objects
bool operator == (const Sandwich& lhs, const Sandwich& rhs)
{
	return lhs.getWeight()  == rhs.getWeight();
}

//define accessor weight
double Sandwich::getWeight() const
{
	return weight;
}
//overloading  > operator to work with sandwich objects
bool operator > (const Sandwich& lhs, const Sandwich& rhs)
{
	return lhs.getWeight() == rhs.getWeight();

}