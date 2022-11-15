/*
demonstrates acumulating totals in a loop
program for calculate total daily sales a book store
*/
#include <iostream>
using namespace std;

int main()
{
    string bookTitle;
    double transaction = 0.0;
    double totalSales = 0.0;

    while (bookTitle != "done")
    {
        cout << "Enter a book title or done : ";
        cin >> bookTitle;

        if (bookTitle != "done")
        {
            cout << "Enter a transaction amount : $";
            cin >> transaction;
            totalSales += transaction;
        }
    }
    cout << "Total sales : $" << totalSales << endl;
}