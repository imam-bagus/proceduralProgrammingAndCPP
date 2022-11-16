/*
Demonstrates using function
Program determines allow or not entry based age
*/

#include <iostream>
using namespace std;

int allow()
{
    cout << "You are old enough to enter this establishment " << endl;
    return 0;
}

int notAllow()
{
    cout << "Sorry, you'll have to wait until you are 21. " << endl;
    return 0;
}

int main()
{
    int age;

    cout << "Enter a age :";
    cin >> age;

    if (age >= 21)
    {
        allow();
    }
    else
    {
        notAllow();
    }
}