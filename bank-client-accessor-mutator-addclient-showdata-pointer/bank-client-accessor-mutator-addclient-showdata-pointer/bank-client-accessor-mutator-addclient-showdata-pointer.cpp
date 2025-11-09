/*
	1)Create client class
	-default and custom constructor
	-2 private member variables
	-showdata function
	2)create Bank class
	-default and custom constructor
	-showdata and addclient functions
		-make use of showdata from client
	-pointer to array arr with client data type
	3)Define functions and constructors
	4) intialize objects and fill with data from test types.
	5) demonstrate for test case
	Last updated on 04-08-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//creating client class
class Client {
public:
	Client();
	Client(double _check, double _save);
	void showData();
private:
	double checkAmt;
	double saveAmt;
};

//creating bank class
class Bank {
public:
	Bank();
	~Bank();
	void showData();
	void addClient(Client _newClient);

private:
	int numClients;
	Client* arr;
};


int main()
{
	//intializing objects
	Bank b1;
	Client c1(2010.71, 9876.33);
	Client c2(13.71, 0.0);
	Client c3(500.00, 600.00);
	Client c4(9622.00, 20000.00);

	//setting precision
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//adding clients then showing current client list after each added client
	cout << "After adding client 1:" << endl;
	b1.addClient(c1);
	b1.showData();

	cout << "After adding client 2:" << endl;
	b1.addClient(c2);
	b1.showData();

	cout << "After adding client 3:" << endl;
	b1.addClient(c3);
	b1.showData();

	cout << "After adding client 4:" << endl;
	b1.addClient(c4);
	b1.showData();

	
	return 0;
}

//default constructor
Client::Client()
	:checkAmt(0), saveAmt(0)
{
}

//custom constructor
Client::Client(double _check, double _save)
	:checkAmt(_check), saveAmt(_save)
{
}

//outputting private memeber variables
void Client::showData()
{
	cout << "Checking Balance: " << checkAmt <<endl;
	cout << "Savings Balance: " << saveAmt << endl;
	cout << "\n";
}

//default constructor and initializing array
Bank::Bank()
	:numClients(0)
{
	arr = new Client[1];
}
//deleting dynamic array to save memory
Bank::~Bank()
{
	delete [] arr;
	arr = nullptr;
	
}
//outputting members of bank
void Bank::showData()
{
	for (int i = 0; i < numClients; i++) {
		cout << "Client " << i + 1 << ":"<<endl;
		arr[i].showData();
	}
}

//adding clients to array, have to consider if it is first 
void Bank::addClient(Client _newClient)
{
	numClients++;
	if (numClients - 1 > 0)
	{
		Client* tempArray = new Client[numClients];
		for (int i = 0; i < numClients- 1; i++) {
			tempArray[i] = arr[i];
		}
		tempArray[numClients - 1] = _newClient;
		arr = new Client[numClients];
		arr = tempArray;

	}
	else
	{
		Client* tempArray2 = new Client[numClients - 1];
		tempArray2[numClients - 1] = _newClient;
		arr = tempArray2;
	}
}
