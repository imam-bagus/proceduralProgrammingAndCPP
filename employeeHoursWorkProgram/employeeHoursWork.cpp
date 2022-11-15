/*
Demonstrates using nesting loop
program for calculate employee total hours worked during a week
*/

#include <iostream>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    int hoursWorked;
    int totalHoursWeek;
    int totalHours;
    string counter = "Y";
    int innCounter = 1;
    int day = 7;
    int week = 1;

    cout << "Enter a First Name :";
    cin >> firstName;
    cout << "Enter a Last Name  :";
    cin >> lastName;

    while (counter == "Y")
    {
        totalHoursWeek = 0;

        while (innCounter <= day)
        {
            cout << "Hours Worked day " << innCounter << " : ";
            cin >> hoursWorked;
            totalHours += hoursWorked;
            totalHoursWeek += hoursWorked;

            innCounter++;
        }

        cout << "Employee name : " << firstName << " " << lastName << endl;
        cout << "Total Hours Week " << week << ": " << totalHoursWeek << endl;
        cout << "Total Hours   : " << totalHours << endl;

        cout << "Continue counting hours work for next week ?, Y or N ";
        cin >> counter;

        innCounter = 1;
        week++;
    }

    cout << "Have a nice day!" << endl;
}
