/*
input
    - Item Name (sample "Dishwasher")
    - Retail Price (sample $425)
    - Wholesale Price ($275)

Process
    - print name of appliance
    - retail price - wholesale price = profit
    - retail price - 15% = sale price
    - sale price - wholesale price = sale profit

output
    - Item Name (Sample "Dishwasher")
    - Retail Price (sample $425)
    - Wholesale Price ($275)
    - Profit (sample $150)
    - Sale Price (sample $361.25)
    - Sale Profit (sample $86.25)
*/

#include <iostream>
using namespace std;

int main()
{
    string itemName = "Diswasher";
    double retailPrice = 425;
    double wholeSalePrice = 275;
    double profit;
    double salePrice;
    double saleProfit;

    profit = retailPrice - wholeSalePrice;
    salePrice = retailPrice - (retailPrice * 0.15);
    saleProfit = salePrice - wholeSalePrice;

    cout << "Item Name       : " << itemName << endl;
    cout << "Retail Price    : $" << retailPrice << endl;
    cout << "Wholesale Price : $" << wholeSalePrice << endl;
    cout << "Profit          : $" << profit << endl;
    cout << "Sale Price      : $" << salePrice << endl;
    cout << "Sale Profit     : $" << saleProfit << endl;

    return 0;
}