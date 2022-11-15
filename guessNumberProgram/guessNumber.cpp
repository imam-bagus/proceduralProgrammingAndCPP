/*
Demonstrates Validating user input
program is a guessing game.
*/

#include <iostream>
using namespace std;

int main()
{
    string ask;
    int randNum, userGuess;

    do
    {
        cout << "enter a guess, from 1 to 10 : ";
        cin >> userGuess;

        while (userGuess < 1 || userGuess > 10)
        {
            cout << "Your input not valid please try again, enter 1 to 10 : ";
            cin >> userGuess;
        }

        randNum = (rand() % 10) + 1;

        if (randNum == userGuess)
        {
            cout << "congratulations, your guess is correct !!" << endl;
        }
        else
        {
            cout << "wrong guess !!" << endl;
        }

        cout << "Are you want try again ?, Y or N : ";
        cin >> ask;

        while (ask != "Y" && ask != "N")
        {
            cout << "Your input not valid please try again, Y or N : ";
            cin >> ask;
        }

    } while (ask == "Y");

    cout << "Thanks for play this game, have a nice day!" << endl;
}