/*
program calculates employee's gross pay

input
    - hours worked
    - rate
    - gross pay
    - overtime
    - hours in week
    - overtime rate

process
    - if hours worked higher than hours in week :
        hours in week x rate + (hours worked - hours in week) x overtime x rate = gross pay
    - if not:
        hours worked x rate = gross pay

output
    - overtime
    - gross pay
*/

#include <iostream>
using namespace std;

int main()
{

    int hoursWorked = 45;
    float rate = 15.00;
    float grossPay;
    string overtime = "yes";
    const int HOURS_IN_WEEK = 40;
    const float OVERTIME_RATE = 40;

    if (hoursWorked > HOURS_IN_WEEK)
    {
        overtime = "Yes";
        grossPay = HOURS_IN_WEEK * rate + (hoursWorked - HOURS_IN_WEEK) * OVERTIME_RATE * rate;
    }
    else
    {
        overtime = "No";
        grossPay = hoursWorked * rate;
    }

    cout << "Overtime  : " << overtime << endl;
    cout << "Gross Pay : $" << grossPay << endl;

    return 0;
}