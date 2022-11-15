/*
demonstrates using loop (DO WHILE) statement
program for print numbers 0 through 10, along with their values doubled and tripled
*/
#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int doubled = 0;
    int tripled = 0;

    do
    {
        doubled = counter * 2;
        tripled = counter * 3;
        cout << counter << "   " << doubled << "   " << tripled << endl;
        counter++;
    } while (counter <= 10);
}