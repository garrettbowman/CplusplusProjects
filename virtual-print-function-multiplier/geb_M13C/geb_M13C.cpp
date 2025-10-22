/*
	1) define base class Multiplier
		-int size
		-pointer to array
		- defaullt constructor
		-virtual print function
	2) derived class tripler
		-custom constructor that triples
		-print pveride
	3) derived class doubler
		-custom constructor that doubles
		-print pveride
	4) define functions and constructors
	5) test with test case
	Last updated on 04-21-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//multipler base classe
class Multiplier {
protected:
	int size;
	int* point;
public:
	Multiplier();
	virtual void print() const = 0;
};

//derived tripler class
class Tripler : public Multiplier {
public:
	Tripler(int arr[], int usize);
	void print() const;
};

//derived doubler class
class Doubler : public Multiplier {
public:
	Doubler(int arr[], int usize);
	void print() const;
};

int main()
{
	//initializing array size + array
	int usize;
	int* arr;
	//prompting for user input
	cout << "How many numbers would you like to enter?";
	cin >> usize;
	//creating temp array
	arr = new int[usize];
	//getting array
	cout << "Enter " << usize << " numbers seperated by a space: \n";
	for (int i = 0; i < usize; i++) {
		cin >> arr[i];
	}
	//doubling array
	cout << "Doubled Array:\n";
	Doubler d(arr, usize);
	d.print();
	cout << "\n";
	//tripling array
	cout << "Tripled Array:\n";
	Tripler t(arr, usize);
	t.print();
	return 0;
}

//defualt constructor
Multiplier::Multiplier()
	:size(0), point(nullptr)
{
}

//custom constructor
Tripler::Tripler(int arr[], int usize)
{
	size = usize;
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] * 3;
	}

	point = arr;
}
//overrided print function
void Tripler::print() const
{
	for (int i = 0; i < size; i++) {
		cout << point[i] << " ";
	}
}
//custom constructor
Doubler::Doubler(int arr[], int usize)
{
	size = usize;
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] * 2;
	}
	point = arr;
}
//overrided print function
void Doubler::print() const
{
	for (int i = 0; i < size; i++) {
		cout << point[i] << " ";
	}
}
