/*
	This is a program to calculate a curved grade for a student.
	Pseudo code:
	1. Get user inputs
	2. Calculate curved grade with square root curve
	3. Display the curved grade


	Last updated on 01-19-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//GET user inputs
	double hw1, hw2, hw3, hw4, qz1, qz2, qz3, test1, test2, test3;
	cout << "Enter 4 homework grades, seperated by space: ";
	
	cin >> hw1 >> hw2 >> hw3 >> hw4;

	cout << "Enter 3 quiz grades seperated by a space: ";
	cin >> qz1 >> qz2 >> qz3;

	cout << "Enter 3 test grades seperated by a space: ";
		cin >> test1 >> test2 >> test3;


	//Calculate curved grade
		double hwGrade, qzGrade, testGrade, rawGrade, curvedGrade;

		hwGrade = ((hw1 + hw2 + hw3 + hw4) / 4.0) * 0.17;
		qzGrade = ((qz1 + qz2 + qz3) / 3) * 0.21;
		testGrade = ((test1 + test2 + test3) / 3.0) * 0.62;
		
		rawGrade = hwGrade + qzGrade + testGrade;
		curvedGrade = 10 * sqrt(rawGrade);

	
	//Display the grade
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

		cout << "The student's final grade is: " << curvedGrade;
	
	

	return 0;
}