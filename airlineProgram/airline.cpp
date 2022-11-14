/*
demonstrates using multiple comparison (Logical operator) in desicion statement.
program for airline
    - offers 15% discount to passenger who 12 years old or younger and same for who 65 years old or older
    - request passenger name and age and print wheter passenger is eligible or not for discount

input   : passenger name & age

Output  : passenger name , age & eligible or not

*/

#include <iostream>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    int age;

    cout << "Passenger First Name :";
    cin >> firstName;
    cout << "Passenger Last Name :";
    cin >> lastName;
    cout << "Passenger Age :";
    cin >> age;

    if (age <= 12 || age >= 65)
    {
        cout << "Passenger eligible for discount" << endl;
    }
    else
    {
        cout << "Passenger Not eligible for discount" << endl;
    }
}