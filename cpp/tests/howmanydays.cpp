#include <iostream>
using namespace std;

int main(){

    cout << "Enter the number of minutes: ";
    long minutes;
    cin >> minutes;
    long totalNumberOfDays = minutes / (24 * 60);
    long numberOfYears = totalNumberOfDays / 360;
    long remainingNumberOfDays = totalNumberOfDays % 365;

    cout << minutes << " minutes is approximately " <<
    numberOfYears << " years and " << remainingNumberOfDays
    << " days." << endl;


    return 0;
}