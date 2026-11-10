#include <iostream>
using namespace std;

int main(){
    
    int counts[101] = {0}; 
    int num;

    cout << "Enter the integers (between 1 and 100), end with 0:\n";

    cin >> num;
    while (num != 0) {
        if (num >= 1 && num <= 100) {
            counts[num]++; 
        }
        cin >> num; 
    }

    cout << "\n--- Results ---\n";
    
    for (int i = 1; i <= 100; i++) {
        if (counts[i] > 0) {
            cout << i << " occurs " << counts[i] 
                 << (counts[i] == 1 ? " time" : " times") << endl;
        }
    }
    return 0;
}