/*
	1)create class prododucebox
		-apples, bananas, kiwis, carrots, brocolis
		-default constructor
		-custom constructor
		-print function
	2) main 
		-initialize producebox 1 with default constructor
		-print member variables p1
		-intialize producebox 2 with custom constuctor
		-print member variables p2

	Last updated on 03-09-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//define class producebox
class ProduceBox
{
private:
	int apples, bananas, kiwis, carrots, brocolis;
public:
	ProduceBox();
	ProduceBox(int a, int b, int k, int c, int br);
	void print();
};


//main

int main()
{
	//call default constructor
	ProduceBox p1;
	//print member functions of p1 object
	p1.print();

	//declare another producebox object using custom constructor
	ProduceBox p2(6, 7, 2, 8, 1);
	//print the member variables of p2 object
	p2.print();
	return 0;
}

//define default constructor
ProduceBox::ProduceBox()
	: apples(0), bananas(0), kiwis(0), carrots(0), brocolis(0)
{}

//define custom constructor
ProduceBox:: ProduceBox(int a, int b, int k ,int c, int br)
	: apples (a), bananas(b), kiwis (k), carrots(c), brocolis(br)
{}

void ProduceBox::print()
{
	cout << "Box of Produce: \n";
	cout << "----------------- \n";
	cout << "Apples: " << apples << endl;
	cout << "Bananas: " << bananas << endl;
	cout << "Kiwis: " << kiwis << endl;
	cout << "Carrots: " << carrots << endl;
	cout << "Brocolis: " << brocolis << endl;
	cout << "\n";
}