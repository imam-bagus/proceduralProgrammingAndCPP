/*
Demonstrates using nesting loop (FOR)
program rectangle pattern
*/

#include <iostream>
using namespace std;

int main()
{
    int length = 10;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i > 1 && i < length && j >= 2 && j < length)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}