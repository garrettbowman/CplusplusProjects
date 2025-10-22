/*
	1) Create system class
		-create ints freq Gb size
		-create double trans
		-create static int networksize, initialize outside class
		-create mutator and accessor functions for class
		-create default and custom constructors for class
		-create getinfo function to display info about system objects
	2) define all the member functions of system class including getinfo function
		- add increment to networksize every time we construct new object.
	3) In main function, make the 2 objects with constructors and update second one as shown in test case.

	Last updated on 03-10-2021 by GEB
*/
#include <iostream>

using namespace std;

class System 
{
private:
	int freq, hdGB;
	double trans;
	static int networkSize;
public :
	//constructiors, default then custom
	System();
	System(int newFreq, int newhdGB, double newtrans);
	//protype accessor functions
	int getfreq() const;
	int gethdGB() const;
	double gettrans() const;
	//setting static int for network size
	static int GetNetworkSize();
	//setting up function that displays data about system
	void getInfo() const;
	//prototyping mutator functions
	void setFreq(int newFreq);
	void sethdGB(int newhdGB);
	void settrans(double newtrans);
};
//intializing static number outside class
int System::networkSize = 0;

int main()
{
	//creating system a with default constructor
	System a;

	//displaying system info of a
	a.getInfo();

	//assigning system b with anonymous object using custom constructor
	System b = System(14e8, 250, 3.0e9);

	//dislaying system info of b
	b.getInfo();

	//using mutator to set new HD size of b
	b.sethdGB(1000);

	cout << "After upgrading the second system:" << endl;
	//displaying info of b system again
	b.getInfo();


	return 0;
}

//defining constructors
System::System()
	: freq(2e9), hdGB(500), trans(1.0e10)
{
	cout << "Created a default System object" << endl;
	//add increment to networksize every time we construct new object.
	++networkSize;
}

System::System(int newFreq, int newhdGB, double newtrans)
	: freq(newFreq), hdGB(newhdGB), trans(newtrans)
{
	cout << "Created a custom System object" << endl;
	//add increment to networksize every time we construct new object.
	++networkSize;
}
//accessor functions
int System::getfreq() const
{
	return freq;
}

int System::gethdGB() const
{
	return hdGB;
}

double System::gettrans() const
{
	return trans;
}

int System::GetNetworkSize()
{
	return networkSize;
}
//function for displaying system information
void System::getInfo() const
{
	cout << "System CLK: " << freq << " Hz" << endl;
	cout << "Hard Drive Size: " << hdGB << " GB" << endl;
	cout << "Transistor count: " << trans << endl;
	cout << "Network Size: " << networkSize << endl;
	cout << "\n";
}
//mutator functions
void System::setFreq(int newFreq)
{
	freq = newFreq;
}

void System::sethdGB(int newhdGB)
{
	hdGB = newhdGB;
}

void System::settrans(double newtrans)
{
	trans = newtrans;
}
