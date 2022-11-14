/*
Demonstrates using desicion (Nested IF) Statement
program calculate total charge for services rendered to Woof Wash dog-grooming business
    - Woof Wash charges $30 for bath, $20 for a cut, $15 to clip nails

input: interactive
        - Service

output: print "Charge for service :", charge
*/

#include <iostream>
using namespace std;

int main()
{
    string services;
    double charge;

    cout << "enter service : ";
    cin >> services;

    if (services == "Bath")
    {
        charge = 30;
    }
    else if (services == "Cut")
    {
        charge = 20;
    }
    else if (services == "Nails")
    {
        charge = 15;
    }
    else
    {
        charge = 0.0;
    }

    cout << "Charge for service : $" << charge << endl;

    return 0;
}