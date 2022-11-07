/*
Program furniture company for compute price of any table a customer order, based fact
        - charge for all tables is a minimum of $150.000.
        - if surface (length x width) over 750 square inches, add & 50.00.
        - if wood is mahogany, add $200.000; if oak add $100.00; No charge is added for pine
        - For extension leaves for table, there is an additional $50.00 charge each.

input: 
        - costTable (initialized to 0.00)
        - lengthTable (initialized to 50 inches)
        - widthTable (initialized to 40 inches)
        - surfaceAreaOfTable
        - woodType (initialized with value "oak")
        - extensionLeaves (initialized with value 2)

Output:
        - Print "The charge for this table is $400"

*/

#include <iostream>
using namespace std;

int main(){

    float costTable = 0.00;
    int lengthTable = 50;
    int widthTable = 40;
    int surfaceAreaOfTable;
    string woodType = "oak";
    int extensionLeaves = 2;

    cout << "Enter a Cost             : $";
    cin >> costTable;

    cout << "Enter a length           : ";
    cin >> lengthTable;
    
    cout << "Enter a width            : ";
    cin >> widthTable;
    
    cout << "Enter a wood type        : ";
    cin >> woodType;
    
    cout << "Enter a extension leaves : ";
    cin >> extensionLeaves;


    if(costTable >= 150.00){
        surfaceAreaOfTable = lengthTable * widthTable;

        if(surfaceAreaOfTable > 750){
            costTable +=  50.00;
        }

        if(woodType == "mahogany"){
            costTable += 200.00;
        }
        
        if(woodType == "oak"){
            costTable += 100.00;
        }

        if(extensionLeaves != 0){
            costTable += 50.00 * extensionLeaves;
        }
    }

    cout << "The charge for this table is $" << costTable << endl;

    return 0;
}