/*
	1)create base class Excercises
		-pure virtual function workouttype
	2)create derived class burpees 
		- workouttype function
	3)create derived class lunges 
		- workouttype function
	4)create derived class bench press
		- workouttype function
	5) define functions
	6) use test case

	Last updated on 04-22-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//create base class Excercises
class Exercises {
public:
	virtual void workoutType() = 0;
};

//create derived class burpees
class Burpees : public Exercises {
public:
	void workoutType() override;
};

//create derived class lunges
class Lunges : public Exercises {
public:
	void workoutType() override;
};

//create derived class bench press
class BenchPress : public Exercises {
public:
	void workoutType() override;
};

int main()
{
	//initializing objects
	Burpees b;
	Lunges l;
	BenchPress bp;
	
	//using each objects workouttype function
	b.workoutType();
	l.workoutType();
	bp.workoutType();
	return 0;
}

//define burpees
void Burpees::workoutType()
{
	cout << "Burpees: full body exercise.\n";
}
//define lunges
void Lunges::workoutType()
{
	cout << "Lunges: lower body exercise.\n";
}
//define benchpress
void BenchPress::workoutType()
{
	cout << "Bench Press: upper body exercise.\n";
}
