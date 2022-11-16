/*
demonstrates accumulating number using Loop (FOR)
program calculates average test score given individual
*/

#include <iostream>
using namespace std;

int main()
{
    int testScore;
    int numStudent;
    double average;
    double testTotal;

    cout << "Enter a number student :";
    cin >> numStudent;

    for (int i = 1; i <= numStudent; i++)
    {
        cout << "Enter a test score student number " << i << " : ";
        cin >> testScore;
        testTotal += testScore;
    }

    average = testTotal / numStudent;
    cout << "Number of student  : " << numStudent << endl;
    cout << "Average Test Score : " << average << endl;
}