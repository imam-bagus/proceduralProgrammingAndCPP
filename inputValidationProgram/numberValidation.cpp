// Demonstrate input validation
// prompts user to enter positive nonzero number and validates the input

#include <iostream>

using namespace std;

int main()
{
    int number;
    string validity;

    do
    {
        cout << "Enter a number : ";
        cin >> number;

        if (number > 0)
        {
            validity = "Y";
            cout << "Your input is Valid !!" << endl;
        }
        else
        {
            validity = "N";
            cout << "Your input is Not Valid !!" << endl;
        }

    } while (validity != "Y");

    cout << "Welcome !!!" << endl;

    return 0;
}