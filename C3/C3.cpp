// C3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Create and define variables
    double purchasetotal = 95, statetax = 4, countytax = 2, totaltax;

    // Calculate the maff
    totaltax = (purchasetotal * (statetax / 100)) + (purchasetotal * (countytax / 100));

    // Display output to 2 decimal places
    cout << fixed << setprecision(2) << "the total sales tax is " << totaltax << " and the final sale is " << purchasetotal + totaltax;
}