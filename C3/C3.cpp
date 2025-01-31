// C3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Create the variables
    double purchasetotal, statetax, countytax, totaltax;

    // Ask the user to define the variables
    cout << "Please enter the purchase total:" << endl; cin >> purchasetotal;
    cout << "Please enter the state tax, then the county tax:" << endl; cin >> statetax >> countytax;

    // Calculate the maffs
    totaltax = (purchasetotal * (statetax / 100)) + (purchasetotal * (countytax / 100));

    // Display output to 2 decimal places
    cout << fixed << setprecision(2) << "the total sales tax is " << totaltax << " and the final sale is " << purchasetotal + totaltax << endl;
}