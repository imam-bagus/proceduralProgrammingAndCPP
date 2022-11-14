/*
Demonstrates using Comments
program for finds sum of numbers from 0 to 100 are divisible by 13

input   : min, max

process : if min % 13 = 0

output  : min
*/

#include <iostream>

using namespace std;

int main()
{
    int minNumber = 0;
    int maxNumber = 100;

    while (minNumber <= maxNumber)
    {
        if (minNumber % 13 == 0)
        {
            cout << minNumber << endl;
        }

        minNumber++;
    }

    return 0;
}