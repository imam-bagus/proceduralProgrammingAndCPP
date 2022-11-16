/*
Demonstrates using Array and searching for exact match
Program for searching area codes
*/

#include <iostream>
using namespace std;

int main()
{
    int areaCodes[5] = {13175, 13860, 17112, 17111, 16340};
    int search;
    int flag = 0;

    cout << "Enter a area code :";
    cin >> search;

    for (int i = 0; i < 5; i++)
    {
        if (search == areaCodes[i])
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "Area code found." << endl;
    }
    else
    {
        cout << "Area code not found." << endl;
    }
}