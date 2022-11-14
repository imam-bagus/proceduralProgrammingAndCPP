/*
Demonstrates using sequential statements
program calculates amount tax withheld from employee week salary

input:  Interactive salary, dependents

Process: Calculate
    - state withholding tax 7.0% & calculate federal withholding tax 32.0%
    - dependent deductions 4.0% of employee salary for each dependent
    - total withholding (Total withholding is total state withholding combined with total federal withholding)
    - take-home pay as salary minus total withholding plus deductions

Output: State Tax (sample $66.5), Federal Tax (sample $304), Dependents (sample $114), Salary (sample $950), Take-Home Pay (sample $693.5)
*/

#include <iostream>

using namespace std;

int main()
{
    double percentageStateTax = 0.07;
    double percentageFederalTax = 0.32;
    double percentageDependents = 0.04;
    double dependents;
    double totalDependents;
    double federalTax;
    double stateTax;
    double salary;
    double takeHomePay;

    cout << "Enter Salary     : $";
    cin >> salary;
    cout << "Enter Dependents : ";
    cin >> dependents;

    stateTax = salary * percentageStateTax;
    federalTax = salary * percentageFederalTax;
    totalDependents = (salary * percentageDependents) * dependents;
    takeHomePay = salary - stateTax - federalTax + totalDependents;

    cout << "\n"
         << "State Tax     : $" << stateTax << endl;
    cout << "Federal Tax   : $" << federalTax << endl;
    cout << "Dependents    : $" << totalDependents << endl;
    cout << "Salary        : $" << salary << endl;
    cout << "Take-home pay : $" << takeHomePay << endl;

    return 0;
}