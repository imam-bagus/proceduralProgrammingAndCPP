/*
program that calculates an employee’s end-of-year bonus
    - prints employee’s name, yearly salary, performance rating, and bonus
    - Bonuses calculated based employee annual salary and performance rating
    rating      Bonus
      1         10 percent of annual salary
      2         6  percent of annual salary
      3         3 percent of annual salary
      4         none

Input: interactive employee name, yearly salary, performance rating

Output: print employee name, yearly salary, performance rating, bonus
*/

#include <iostream>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    double salary;
    int rating;
    double bonus;
    double totalSalary;

    cout << "Enter a employee first name : ";
    cin >> firstName;
    cout << "Enter a employee last name  : ";
    cin >> lastName;
    cout << "Enter a employee salary     : $";
    cin >> salary;
    cout << "Enter a employee rating     : ";
    cin >> rating;

    if (rating == 1)
    {
        bonus = salary * 0.10;
    }
    else if (rating == 2)
    {
        bonus = salary * 0.06;
    }
    else if (rating == 3)
    {
        bonus = salary * 0.03;
    }
    else
    {
        bonus = 0.0;
    }

    cout << "employee name   : " << firstName << "" << lastName << endl;
    cout << "employee salary : $" << salary << endl;
    cout << "employee rating : " << rating << endl;
    cout << "employee bonus  : $" << bonus << endl;

    return 0;
}