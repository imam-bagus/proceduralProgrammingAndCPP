/*
input
    Interactive 
        - input number

process
    - number x 2 = answer
    - check want calculate again or stop by input 0

output
     - print answer
*/

#include <iostream>

using namespace std;

int main()
{

    int inputNumber;
    int calculatedAnswer;

    cout << "Enter a number or enter 0 for stop : ";
    cin >> inputNumber;

    while(inputNumber != 0)
    {
        calculatedAnswer = inputNumber * 2;
        
        cout << "Result = " << calculatedAnswer << endl;
    
        cout << "Enter a number or enter 0 for stop : ";
        cin >> inputNumber;
    }
}