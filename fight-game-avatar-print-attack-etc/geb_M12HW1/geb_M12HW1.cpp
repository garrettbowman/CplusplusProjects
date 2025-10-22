/*
	1)create base class Avatar
		-3 private member data
		-getname function
		-custom constructor
		-Damage function
		-print function
	2)create fighter derived class
		-1 private data power
		-custom constructor
		=print function
		-attack function.
	3)definine classes and functions within them
	4)initialize objects
	5)follow test case

	Last updated on 04-22-2021 by GEB
*/
#include <iostream>
#include <string>
using namespace std;

//creating base class
class Avatar {
private:
	string name;
	int XP;
	int HP;
public:
	string getName();
	Avatar(string _name, int _XP, int _HP);
	void Damage(int hit);
	void print();

};
//creating derived class
class Fighter : public Avatar {
private:
	int pwr;
public:
	Fighter(string _name, int _XP, int _HP, int _pwr);
	void print();
	void Attack(Avatar& p);
};
int main()
{
	//initializing the objects
	Avatar g("George", 15, 25);
	Fighter b("Billy", 12, 35, 5);
	

	//printing the original objects
	cout << "Displaying the original objects:" << endl;
	g.print();
	b.print();

	//testing attack function
	cout << "\nTest attack() function:" << endl;
	b.Attack(g);
	

	//testing attack function
	cout << "\nTest attack() function:" << endl;
	b.Attack(b);
	
	return 0;
}

//getname function
string Avatar::getName()
{
	return string(name);
}
//custom constructor
Avatar::Avatar(string _name, int _XP, int _HP)
	:name(_name), XP(_XP), HP(_HP)
{}

//custom constructor
void Avatar::Damage(int hit)
{
	HP = HP - hit;
}
//print function
void Avatar::print()
{
	cout << name << " is level " << XP << " with " << HP << " HP" << endl;
}
//custom contructor
Fighter::Fighter(string _name, int _XP, int _HP, int _pwr)
	: Avatar(_name,_XP, _HP), pwr(_pwr)
{}
//print function
void Fighter::print()
{
	Avatar::print();
	cout << Avatar::getName() << " has an attack power of " << pwr << endl;
}
///attack function
void Fighter::Attack(Avatar& p)
{
	p.Damage(pwr);
	cout << Avatar::getName() << " attacks " << p.getName() << " and deals " << pwr << " damage!" << endl;
	cout << "Result of attack: " << endl;
	p.print();
}
