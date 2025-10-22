/*
	Last updated on 01-20-2021 by GEB
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int secInput , weeks, days, hours, sec;
    double years, secInput2;

    //user inputs seconds
    cout << ("Enter the number of seconds: ");
        cin >> secInput;

    //math
        weeks = secInput / 604800;
        days = (secInput % 604800) / 86400;
        hours = (secInput - weeks * 604800 - days * 86400) / 3600;
        sec = (secInput - weeks * 604800 - days * 86400 - hours * 3600);
       //Output
        cout << weeks << (" week(s) ") << days << (" day(s) ") << hours << (" hour(s) and ") << sec << (" second(s). ") << endl;
        cout << (" \n");

        //user inputs seconds second time
        cout << ("Enter the number of seconds: ");
        cin >> secInput2;

        

        //math second time
        years = secInput2 / 31536000;

        cout.setf(ios::fixed);
        cout.precision(0);
        cout << fixed << secInput2;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(5);
        cout << (" seconds converted to years is ") << years << (" year(s).\n");

    return 0;

}