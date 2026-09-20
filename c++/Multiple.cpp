#include <iostream>
using namespace std;

int main(){
    // prompt the uswr to enter three numbers
    double number1, number2, number3;
    cout << "Enter tree numbers: ";
    cin >> number1, number2, number3;

    // compute average
    double average = (number1 + number2 +number3) / 3;
    // Display result 
    cout << "The average of " << number1 << " "
     << number2 << " " << number3 
     << " is " << average << endl;

     return 0;

    }