/*	1) prototype functions
*	2) declare variables
	3)ASK the user if they want to play using input validation to recieve y or n
	-startgame fx to deduct 1.50
	4) get guess 1-6 from user
	5) roll function and calculate if user won or lost
	6) add or subtract from user total money 
	7) ask user to play again or not allow them if they dont have sufficient money

	Last updated on 02-04-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// function declararion/ prototype
int roll();
double start_Game(double userMoney);


int main()
{
	srand(time(0));
	cout << "Welcome to the dice rolling guessing game!\n\n";

	//declare and initialize variables
	double userMoney = 5.00;
	char continuePlaying = 'y';
	int guess = 0;
	//setting 2 decimal points.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "You currently have: $" << userMoney << endl;
	//ASK the user if they want to play using input validation to recieve y or n
	cout << "Would you like to play for $1.50? (y/n)";
	cin >> continuePlaying;
	while (continuePlaying != 'y' && continuePlaying != 'n') {
		cout << "Invalid Entry!" << endl;
		cout << "Would you like to play for $1.50? (y/n)";
		cin >> continuePlaying;
	}
	

	while (continuePlaying == 'y' && userMoney >= 1.50){
		//resetting values
		guess = 0;
		//calling the startgame function
		userMoney = start_Game(userMoney);
		//prompt the user for guess value then making sure it is 1-6
		cout << "Guess a positive number (1-6):";
		cin >> guess; 
		while (guess < 1 || guess > 6) {
			cout << "Invalid Entry!" << endl;
			cout << "Guess a positive number (1-6):";
			cin >> guess;
		}
		//running the random roll then displaying it for user
		int rollResult = roll();
		cout << "You rolled a: "<< rollResult << endl;
		//the winning case gives user 2$
		if (guess == rollResult) {
			cout << "Your guess was correct! You win $2.00!\n";
			userMoney = userMoney + 2.00;

		}
		//informing user they guessed incorrectly and not giving reward
		else {
			cout << "Your guess was incorrect! You lose.\n";
		}
		//if the user has less than 1.50 the program will not allow them to keep playing.
		if (userMoney < 1.50) {
			cout << "Sorry, you do not have enough money!\n";
			continue;
		}
		cout << " \n";// asking the user if they want to play again
		cout << "You currently have: $" << userMoney << endl;
		cout << "Would you like to play for $1.50? (y/n)";
		cin >> continuePlaying;
	}

	//exiting
	cout << "\n" << "Goodbye!";
	return 0;
}

//define functions

int roll() {
	int rollResult1 = rand() % 6 + 1; //gives random 0-5 number so adding 1 to make random 1-6 number

		return rollResult1;
}

double start_Game(double userMoney) {//deducting 1.50 from usermoney then returning new value.
	userMoney = userMoney - 1.50;

	return userMoney;
}