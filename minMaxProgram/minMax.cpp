/*
Demonstrates using array and loop for find max & min number
program find max and min value
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaration
    int size = 10;
    int arrNum[size];

    int i;
    int max;
    int min;

    // prompt input
    for (i = 0; i < size; i++)
    {
        cout << "Enter a number " << i + 1 << " : ";
        cin >> arrNum[i];
    }

    // find max
    max = arrNum[0];
    for (i = 0; i < size; i++)
    {

        if (arrNum[i] >= max)
        {
            max = arrNum[i];
        }
    }

    // find min
    min = arrNum[0];
    for (i = 0; i < size; i++)
    {

        if (arrNum[i] <= min)
        {
            min = arrNum[i];
        }
    }

    // print max & min
    cout << "Maximun number : " << max << endl;
    cout << "Minimun number : " << min << endl;
}