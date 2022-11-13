/*
program determines valid date

Input
    - interactive month, day, year

Process :
    - valid years are grather than 0
    - valid months are value 1 through 12
    - valid days are values 1 through 31

Output:
    - if valid date print "month/day/year is a valid date"
    - if not valid date print "month/day/year is a valid date"
*/

#include <iostream>

using namespace std;

int main()
{
    int month;
    int day;
    int year;

    cout << "\n"
         << "Enter a month : ";
    cin >> month;
    cout << "Enter a day    : ";
    cin >> day;
    cout << "Enter a year : ";
    cin >> year;

    if (year > 0)
    {
        if (month > 0 & month <= 12)
        {
            if (day > 0 & day <= 31)
            {
                cout << month << "/" << day << "/" << year << " is a valid date";
            }
            else
            {
                cout << month << "/" << day << "/" << year << " is an invalid date";
            }
        }
        else
        {
            cout << month << "/" << day << "/" << year << " is an invalid date";
        }
    }
    else
    {
        cout << month << "/" << day << "/" << year << " is an invalid date";
    }

    return 0;
}