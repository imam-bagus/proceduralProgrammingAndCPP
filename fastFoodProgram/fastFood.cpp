/*
Demonstrates using pararel arrays
program for fast food restaurant
    - print customer number and item name for fast-food item
    - print error message if item is not found
*/
#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int custNum[] = {123, 234, 345, 456, 567, 678, 789};
    string itemName[] = {"Fries", "Pepsi", "coffee", "Chips", "Rings", "Coke", "Hamburger"};

    cout << "  Customer Number  "
         << "   Item Number   " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "       " << custNum[i]
             << "              " << itemName[i] << endl;
    }

    return 0;
}