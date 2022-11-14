/*
Demonstrate modular program
program for print company name & address and print customer name & balance

input  : interactive name ,balance

output : customer name, cusotomer balance, company name, company address
*/

#include <iostream>
void nameAndAddress();
using namespace std;

int main()
{
    string name;
    double balance;

    cout << "Enter a customer name :  ";
    cin >> name;
    cout << "Enter a balance       : $";
    cin >> balance;

    nameAndAddress();

    cout << "\n"
         << "Customer Name    : " << name << endl;
    cout << "Customer Balance : $" << balance << endl;

    return 0;
}

void nameAndAddress()
{
    const string NAME_ADDRESS_LINE1 = "XYZ Manufacturing";
    const string NAME_ADDRESS_LINE2 = "Kalimanggis 03/06";
    const string NAME_ADDRESS_LINE3 = "Kota Bekasi, Jawa Barat 17435";

    cout << "\n"
         << NAME_ADDRESS_LINE1 << endl;
    cout << NAME_ADDRESS_LINE2 << endl;
    cout << NAME_ADDRESS_LINE3 << endl;
}