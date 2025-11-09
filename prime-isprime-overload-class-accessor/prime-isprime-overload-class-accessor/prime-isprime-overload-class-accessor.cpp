/*
	1) create PrimeNumber class
		-1 private int 
		- default and custom constructor
		- accessor to private int
		- constant isPrime function 
		- overloading ++ operator to use with our PrimeNumber class
	2) define constructors
	3) define accessor
	4) define ++ operator overloading 
	5) define isprime function
	6) prompt user for prime number, keep asking until they give prime
	7) run isprime to find next prime number
		-prime only divisible by 1 and itself
	8) ask user to repeat

	Last updated on 03-18-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

class PrimeNumber
{
public:
	PrimeNumber();
	PrimeNumber(int _primeNum);
	double getNum();
	bool isPrime(int num) const;
	//overloading ++ operator
	const PrimeNumber operator ++(int p);

private:
	int primeNum;

};
int main()
{
	//initialize variables
	int num;
	//create object default constructor
	PrimeNumber p;
	char repeat = 'y';
	while (repeat == 'y') {
		//prompt user for input prime number
		cout << "Please enter a prime number: ";
		cin >> num;
		//while isprime returns false continue this statement
		while (!p.isPrime(num))
		{
			cout << "The number you entered is not prime!\nPlease enter a new prime number: ";
			cin >> num;
		}
		//assigning p1 an anonymous object with value of user input
		p = PrimeNumber(num);
		//using accessor function to output
		cout << "The current prime number is: " << p.getNum() << endl;
		//assigning p2 an anonymous object p++
		PrimeNumber p2 = p++;
		//using accessor function to output
		cout << "The next prime number is: " << p2.getNum() << endl;



		//asking user to repeat
		cout << "Would you like to run again? (y/n) ";
		cin >> repeat;
		cout << "\n";
	}

	//exiting
	cout << "Thank you for using this program. Goodbye!";
	return 0;
}

//default constructor w output
PrimeNumber::PrimeNumber()
	:primeNum(2)
{
	cout << "The default prime number is: " << primeNum << endl;
}
//custom constructor
PrimeNumber::PrimeNumber(int _primeNum)
	:primeNum(_primeNum)
{

}
//accessor function
double PrimeNumber::getNum()
{
	return primeNum;
}

//if number is >2 and % i = 0 then it is not prime, 1 2 are prime so not included
bool PrimeNumber::isPrime(int num) const
{
	if (num > 2) {
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) {
				return false;
			}
		}
	}
	return true;
}


//overriding ++ operator
const PrimeNumber PrimeNumber::operator++(int)
{
	primeNum++;
	while (!isPrime(primeNum)) {
		primeNum++;
	}
	return PrimeNumber(primeNum);
}
