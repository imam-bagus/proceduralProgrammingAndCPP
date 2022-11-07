/*
Program college admission for determine accept or reject student based on test score & class rank

input
    interactive 
        - test score 
        - class rank

Output
    - print "accept" or "reject"
*/

#include <iostream>

using namespace std;

int main()
{
    int testScore;
    int classRank;

    cout << "Enter a test score : ";
    cin >> testScore;
    cout << "\n" << "Enter a class score : ";
    cin >> classRank;

    if(testScore >= 90){
        if(classRank >= 25){
            cout << "Accept" << endl;
        }else{
            cout << "Reject" << endl;
        }
    }else{
        if(testScore >= 80 ){
            if(classRank >=50){
                cout << "Accept" << endl;
            }else{
                cout << "Reject" << endl;
            }
        }else{
            if(testScore >= 70 ){
                if(classRank >= 75){
                    cout << "Accept" << endl;
                }else{
                    cout << "Reject" << endl;
                }
            }else{
                    cout << "Reject" << endl;
            }
        }
    }

    return 0;
}