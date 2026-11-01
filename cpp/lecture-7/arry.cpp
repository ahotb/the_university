#include <iostream>
using namespace std;


int main(){
    cout << "Enter the number of students: ";
    int n;
    cin >> n;
    string arryName[n];
    double arryScore[n];
    for (int i = 0; i < n; i++){
        cout << "Enter a student name: ";
        cin >> arryName[i];
        cout << "Enter a student score: ";
        cin >> arryScore[i];
    }
    double firstHighest = -1.0;
    double secondHighest = -1.0;
    string firstName = "";
    string secondName = "";

    for (int i = 0; i < n; i++){
        if (arryScore[i] > firstHighest){
            secondHighest = firstHighest;
            secondName = firstName;
            firstHighest = arryScore[i];
            firstName = arryName[i];
        } 
        else if (arryScore[i] > secondHighest){
            secondHighest = arryScore[i];
            secondName = arryName[i];
        }
    }


    cout << "\nTop two students:" << endl;
    cout << firstName << "'s score is " << firstHighest << endl;
    cout << secondName << "'s score is " << secondHighest << endl;





    return 0;
}