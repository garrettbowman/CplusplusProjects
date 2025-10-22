/*
	1) create Car base class
		-virtual function
	2) create derived Toyota class
		-overrided speak
	3) create derived Honda class
		-overrided speak
	4) Nonmember drive function
	5) define functions
	6) test w test case

	Last updated on 04-20-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//base class
class Car {
public:
	virtual void speak() const = 0;
};
//derived Toyota
class Toyota :public Car {
public:
	void speak() const override;
};

class Honda :public Car {
public:
	void speak() const override;
};

// declare drive()
void drive(const Car& car);

int main()
{
	//declare pointer for car
	Car* carP;

	//declare toyota nad hond aobjects
	Toyota toyota;
	Honda honda;

	//make car pointer point to toyota then honda and call speak
	carP = &toyota;
	carP->speak();
	carP = &honda;
	carP->speak();

	//call drive function
	drive(toyota);
	drive(honda);

	return 0;
}
//overided speak function
void Toyota::speak() const
{
	cout << "This is a Toyota!\n";
}
//overided speak function
void Honda::speak() const
{
	cout << "This is a Honda!\n";
}
//drive function
void drive(const Car& car)
{
	car.speak();
	cout << "Vroom Vroom!\n";
}
