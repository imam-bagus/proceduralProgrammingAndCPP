/*
program demonstrates 
    - Operator (arithmetic & assigment)
    - Precedence & associativity
*/

#include <iostream>

using namespace std;

int main()
{
    int value1 = 9;
    int value2 = 3;
    int value3 = 10;

    int answer1, answer2, answer3, answer4, answer5;
    int answer6, answer7, answer8, answer9, answer10;

    // arithmetic operator

    cout << "\n Arithmetic Operator \n" << endl;

    answer1 =  value1 * (value2 + value3);
    cout << "9 x (3 + 10) =  " << answer1 << endl;

    answer2 =  value1 * value2;
    cout << "9 x 3 =  " << answer2 << endl;

    answer3 =  value1 / value2;
    cout << "9 / 3 =  " << answer3 << endl;

    answer4 =  value2 %  value3;
    cout << "9 % 3 =  " << answer4 << endl;
    
    answer5 =  value1 + value2;
    cout << "9 + 3 =  " << answer5 << endl;

    answer6 =  value1 - value2;
    cout << "9 - 3 =  " << answer6 << endl;

    answer7 =  value1++;
    cout << "(Precedence postfix lower than '=') 9++ = "<< answer7 << endl;

    answer8 =  value1--;
    cout << "(Precedence postfix lower than '=') 9-- = " << answer8 << endl;

    answer9 =  ++value1;
    cout << "9 + 1 = " << answer9 << endl;

    answer10 =  --value1;
    cout << "9 - 1 = " << answer10 << endl;

    answer1 =  value1 + value2 * value3;
    cout << "9 + 3 x 10 =  " << answer1 << endl;


    // assigment operators

    cout << "\n Assigment Operator \n"<< endl;

    answer1 =  value3;
    answer1 *= value3;
    cout << "10 x 10 = " << answer1 << endl;

    answer2 =  value3;
    answer2 /= value2;
    cout << "10 / 3 = " << answer2 << endl;

    answer3 =  value3;
    answer3 %=  value2;
    cout << "10 % 3 = " << answer3 << endl;

    answer4 =  value3;
    answer4 +=  value2;
    cout << "10 + 3 = " << answer4 << endl;
    
    answer5 =  value3;
    answer5 -=  value2;
    cout << "10 - 3 = " << answer5 << endl;

    return 0;
}