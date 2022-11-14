/*
Demonstrates using Comments
number-doubling program

input   : Interactive input number

process : number x 2 = answer, check want calculate again or stop by input 0

output  : print answer
*/

#include <iostream>

using namespace std;

int main()
{
    // declaration of variables
    int inputNumber;
    int calculatedAnswer;

    // prompt user & get interactive user input
    cout << "Enter a number or enter 0 for stop : ";
    cin >> inputNumber;

    while (inputNumber != 0)
    {
        // calculate number doubled
        calculatedAnswer = inputNumber * 2;

        // output result
        cout << "Result = " << calculatedAnswer << endl;

        // prompt user & get interactive user input
        cout << "Enter a number or enter 0 for stop : ";
        cin >> inputNumber;
    }
}