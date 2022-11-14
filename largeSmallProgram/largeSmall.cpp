/*
Demonstrates using desicion (IF ELSE) Statement
program for determine largest & smallest of 3 integer value

input:
    interactive
        - value 1 (sample 210)
        - value 2 (sample 330)
        - value 3 (sample -1)

Output:
    print "largest value is  :", largestValue
    print "smallest value is :", smallestValue
*/

#include <iostream>
using namespace std;

int main()
{
    int value1;
    int value2;
    int value3;
    int largestValue;
    int smallestValue;

    cout << "Enter a value 1: ";
    cin >> value1;
    cout << "Enter a value 2: ";
    cin >> value2;
    cout << "Enter a value 3: ";
    cin >> value3;

    largestValue = value1;
    smallestValue = value1;

    if (value2 >= largestValue)
    {
        largestValue = value2;
    }

    if (value3 >= largestValue)
    {
        largestValue = value3;
    }

    if (value2 <= smallestValue)
    {
        smallestValue = value2;
    }

    if (value3 <= smallestValue)
    {
        smallestValue = value3;
    }

    cout << "largest value is   : " << largestValue << endl;
    cout << "Smallest value is  : " << smallestValue << endl;

    return 0;
}