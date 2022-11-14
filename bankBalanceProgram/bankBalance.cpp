/*
Demonstrates using sentinel value to control loop.
program displays customer current bank balance &  asks if user wants calculate customer balance after one year of interest has accumulated
*/

#include <iostream>
using namespace std;

int main()
{
    double bankBalance;
    double interestRate;
    string sentinelValue;

    cout << " Enter a starting balance :";
    cin >> bankBalance;
    cout << " Enter interest rate :";
    cin >> interestRate;
    cout << " Do you want to see your current balance? Y or N :";
    cin >> sentinelValue;

    while (sentinelValue == "Y")
    {
        cout << " Bank balance is " << bankBalance << endl;
        bankBalance = bankBalance + bankBalance * interestRate;
        cout << " Do you want to see your next year balance? Y or N :";
        cin >> sentinelValue;
    }
    cout << " Have a nice days!" << endl;
}