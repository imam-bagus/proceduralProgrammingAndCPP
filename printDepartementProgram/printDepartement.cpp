/*
program print departement name
*/
#include <iostream>
using namespace std;

int main()
{
    int depNum;
    string depName;

    cout << "enter a departement number : ";
    cin >> depNum;

    switch (depNum)
    {
    case 1:
        depName = "Marketing";
        break;
    case 2:
        depName = "Product";
        break;
    case 3:
        depName = "Human resource";
        break;
    default:
        depName = "Uknown";
        break;
    }

    cout << "Departement : " << depName << endl;

    return 0;
}