/*
	1)Declare/ definine/ prototype 2 functions is_alphabet() and print_rectangle
	2)Prompt a user for an alphabetical character
	3)reask/ run is aplhabet until user inputs letter
	4)Prompt a user for an length and width of shape
	5)run the print rectangle program
	6)ask if user wants to run program again

	Last updated on 02-03-2021 by GEB
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// function declararion/ prototype
bool is_alphabet(char letter);
void print_Rectangle(int row, int column, char letter);


int main()
{
	
	//declare and initilize variables
	char letter = 'a';
	char letter1 = 'a';
	char repeat = 'y';
	int length = 0, height = 0;
	while (repeat == 'y') {
		//prompt user for character input then check if it is a alphabetical character
		cout << "Enter an alphabetical character: ";
		cin >> letter;
		bool isLetter = is_alphabet(letter);
		//if it is not letter repeat this statement/input until function returns true 
		while (isLetter == false) {
			cout << "Enter an alphabetical character, either A-Z or a-z: ";
			cin >> letter;
			isLetter = is_alphabet(letter);
		}
		//Prompt the user for length and height of drawing
		cout << "Enter a length and height, seperated by a space: ";
		cin >> length >> height; 
		//make shape
		print_Rectangle(length, height, letter);

		//ask user to repeat program
		cout << "Would you like to print another rectangle? (y/n)?";
		cin >> repeat;
	}
	cout << "Goodbye!";
	return 0;
}

//define functions
bool is_alphabet(char letter) {
	if (letter >= '0' && letter <= '9') { //ruling out numbers 

		return false;
	}
	else {

		return true;
	}
}
void print_Rectangle (int length, int height, char letter) {
	for (int y = 1; y <= height; y++) {
		for (int x = 1; x <= length; x++) {
			if (y == 1 || y == height || x == 1 || x == length) {//telling program when to print the character
				cout << letter;
			}
			else {
				cout << " "; //empty spaces in middle
			}
		}
		cout << endl; //ending line after row

	}
}