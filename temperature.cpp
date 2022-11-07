/*
Program convert Farenheit to Celcius

input
    - Interactive
        farenheit

process
    - (Farenheit − 32) x (5/9) = celcius

Output 
    - Farenheit temperatur
    - Celcius temperature
*/

#include <iostream>

using namespace std;

int main()
{
    double farenheit;
    double celcius;

    cout << "Enter Farenheit temperature : ";
    cin >> farenheit;

    celcius = (farenheit - 32.0) * (5.0/9.0);

    cout << "Farenheit temperature : " << farenheit << endl;
    cout << "Celcius temperature   : " << celcius << endl;

    return 0;
}