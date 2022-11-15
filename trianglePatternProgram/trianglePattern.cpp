/*
Demonstrates using nesting loop (FOR)
program triangle pattern
*/

#include <iostream>
using namespace std;

int main()
{
    int length = 10;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}