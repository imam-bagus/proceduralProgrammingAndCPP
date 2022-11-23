// Demonstrate input validation
// prompts the user to enter word. word be at least 8 characters long. Validate the input

#include <iostream>

using namespace std;

int main()
{
    string word;
    string validity;

    do
    {
        cout << "Enter a word : ";
        cin >> word;

        if (word.length() >= 8)
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