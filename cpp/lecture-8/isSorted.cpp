#include <iostream>
using namespace std;

bool isSorted(const int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (list[i] > list[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    int list[100];

    cout << "Enter the size of the list: ";
    cin >> size;

    cout << "Enter list: ";
    for (int i = 0; i < size; i++) {
        cin >> list[i];
    }

    if (isSorted(list, size)) {
        cout << "The list is already sorted" << endl;
    } else {
        cout << "The list is not sorted" << endl;
    }

    return 0;
}