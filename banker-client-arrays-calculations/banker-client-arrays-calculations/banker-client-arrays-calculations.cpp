/*
	1)Set up the classes bank and client, adding public and private variables to store data
	2) prototype and define functions in classes to manipulate and show data
	3)hardcode some data to test out our manupulator and accessor functions
	4) add clients to an array then output array after each successful add until we reach capacity

	Last updated on 03-02-2021 by GEB
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


class Client {
public:
	//setting up manipulators to set balances
	void setMoney(double newCheck, double newSave);
	void showData();

private:

	//private variables that must be accessed by a function
	double checkAmt;
	double saveAmt;
};

class Bank {
public:
	void addClient(Client newClient);
	void showData();

private:
	const int MAX_CAP = 3;
	Client clients[3]{};
	int numClients = 0;

};


int main()
{
	//initialize variables
	int newCheck, newSave;

	// adding our classes to main function 
	Bank a1;
	Client c1, c2, c3, c4;

	//setting data for our clients to test our functions
	c1.setMoney(2010.71, 9876.33);
	c2.setMoney(13.71, 0.00);
	c3.setMoney(500.00, 600.00);
	c4.setMoney(500.00, 600.00);

	//adding clients then displaying current client list
	a1.addClient(c1);
	a1.showData();

	a1.addClient(c2);
	a1.showData();

	a1.addClient(c3);
	a1.showData();
	
	a1.addClient(c4);
	return 0;
}

//Client object Functions
void Client::setMoney(double newCheck, double newSave)
{
	//saving the values to the old values
	checkAmt = newCheck;
	saveAmt = newSave;
}

void Client::showData()
{
	// setting decimal precision to 2 places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Checking Balance: " << checkAmt << endl;
	cout << "Savings Balance: " << saveAmt << endl;
}

//Bank functions

void Bank::addClient(Client newClient)
{
	if (numClients < MAX_CAP) {
		clients[numClients] = newClient;
		numClients++;
		cout << "After adding Client " << numClients << ":" << endl;
	}
	else {
		cout << "\n";
		cout << "After adding Client " << numClients + 1 << ":" << endl;
		cout << "Not enough space to add client!" << endl;
		
	}
}
// running the showdata function for each client
void Bank::showData()
{

	for (int i = 0; i < numClients; i++) {
		cout << "Client " << i + 1 << ":" << endl;
		clients[i].showData();
		cout << "\n";
	}
}