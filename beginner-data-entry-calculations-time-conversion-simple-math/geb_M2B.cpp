/*
	Last updated on 01-19-2021 by GEB
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, sum1, sub1, mult1, div1;
    double num2, sum2, sub2, mult2, div2;

    /*
      Input two numbers from user separated by space
     */
    cout << ("Enter an integer and and floating-point number seperated by a space : ");
    cin >> num1 >> num2;
    cout << ("\n");
    /*
     * Calculations
     */
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    sum1 = num1 + num2;
    sub1 = num1 - num2;
    mult1 = num1 * num2;
    div1 = num1 / num2;
    
    sum2 = num1 + num2;
    sub2 = num1 - num2;
    mult2 = num1 * num2;
    div2 = num1 / num2;

    /*
      Output results
     */
    
    cout << ("Output to double type:\n")<< endl;
    cout << num1 << (" + ") << num2 << (" = ") << sum2 << endl;
    cout << num1 << (" - ") << num2 << (" = ") << sub2 << endl;
    cout << num1 << (" * ") << num2 << (" = ") << mult2 << endl;
    cout << num1 << (" / ") << num2 << (" = ") << div2  << endl ;
    cout << ("\n");
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);

    cout << ("Output to integer type: \n") << endl;
    cout << num1 << (" + ") << num2 << (" = ") << sum1 << endl;
    cout << num1 << (" - ") << num2 << (" = ") << sub1 << endl;
    cout << num1 << (" * ") << num2 << (" = ") << mult1 << endl;
    cout << num1 << (" / ") << num2 << (" = ") << div1 << endl;

    
	return 0;
    
}