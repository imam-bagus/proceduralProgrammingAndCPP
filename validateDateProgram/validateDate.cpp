/*
Demonstrate modular program.
program determines valid date

Input   : interactive month, day, year

Process : valid years are grather than 0, months are value 1 through 12, days are values 1 through 31

Output  : if valid date print "month/day/year is a valid date", if not valid date print "month/day/year is a valid date"
*/

#include <iostream>
using namespace std;

string validateDate(int month, int day, int year)
{
    string result;

    if (year > 0)
    {
        if (month > 0 & month <= 12)
        {
            if (day > 0 & day <= 31)
            {
                result = "valid";
            }
            else
            {
                result = "invalid";
            }
        }
        else
        {
            result = "invalid";
        }
    }
    else
    {
        result = "invalid";
    }

    return result;
}

int main()
{
    int month;
    int day;
    int year;
    string determination;

    cout << "\n"
         << "Enter a month : ";
    cin >> month;
    cout << "Enter a day   : ";
    cin >> day;
    cout << "Enter a year  : ";
    cin >> year;

    determination = validateDate(month, day, year);

    if (determination == "valid")
    {
        cout << month << "/" << day << "/" << year << " is a valid date";
    }
    else
    {
        cout << month << "/" << day << "/" << year << " is a invalid date";
    }
    return 0;
}