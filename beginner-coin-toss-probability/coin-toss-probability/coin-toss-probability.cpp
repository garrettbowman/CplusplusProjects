/*
	1)Declare/ definie a function to simulate tossing a coin
	2)Prompt a user how many times
	3)simulate tossing a coin based on user input to display each toss result
	4)display probability
	5)ask if user wants to run program again

	Last updated on 02-02-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
// function declararion/ prototype
char coin_flip();
int main()
{
	srand(time(0));
	// declare and initialize variables
	int num = 0, headsCount = 0, i = 0;
	char again = 'y';
	while (again == 'y') {
		headsCount = 0;
		// user input prompt
		cout << "How many times would you like to toss your coin?";
		cin >> num;
		//tossing a coin according to user input
		for (int i = 1; i <= num; i++) {
			char flipResult = coin_flip();

			//display tossing result
			cout << i << ": " << flipResult << endl;
			if (flipResult == 'H') {
				headsCount++;
			}
		}
		//display probability of getting heads
		double headsProb = static_cast<double>(headsCount) / num * 100;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "the probability of getting heads: " << headsProb << endl;
		//ask to run again

		cout << "Run it again? (y/n)";
		cin >> again;
		cout << "\n";
	}
	return 0;
}
//function definition
char coin_flip()
{
	int tossResult = rand() % 2;
	if (tossResult == 1) {
		return 'H';	
	}
	else {
		return 'T';	
	}
}