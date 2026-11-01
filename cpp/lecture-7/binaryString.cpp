#include <iostream>
#include <string>
using namespace std;

int bin2Dec(const string& binaryString) {
    int decimalValue = 0;

    for (int i = 0; i < binaryString.length(); i++) {
        decimalValue = decimalValue * 2 + (binaryString[i] - '0');
    }

    return decimalValue;
}

int main() {
    string binaryString;

    cout << "Enter a binary number: ";
    cin >> binaryString;

    cout << "The decimal value is " << bin2Dec(binaryString) << endl;

    return 0;
}