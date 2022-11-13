/*
Program calculate customer charges for telephone company
    - All calls are 20 cents per minute
    - plus charges 15 cents per minute for calls outside of customer area code that last over 20 minutes

Input:
    interactive
    - customer number
    - call minute
    - outside area code


Ouput:
    print
        - customer number
        - call time
        - outside area code
        - charges
*/

#include <iostream>
using namespace std;

int main()
{
    string outsideAreaCode;
    double callMinute;
    string customerNumber;
    double charge;

    cout << "customer number :";
    cin >> customerNumber;
    cout << "call time ?, enter a minute :";
    cin >> callMinute;
    cout << "customer outside of area code ? ,enter 'YES' or 'NO' : ";
    cin >> outsideAreaCode;

    if (outsideAreaCode == "YES" && callMinute > 20)
    {
        charge = 20 * callMinute + (15 * callMinute);
    }
    else
    {
        charge = 20 * callMinute;
    }

    cout << "customer number            : " << customerNumber << endl;
    cout << "call time                  : " << callMinute << endl;
    cout << "Customer outside area code : " << outsideAreaCode << endl;
    cout << "Charge                     : $" << charge << endl;

    return 0;
}