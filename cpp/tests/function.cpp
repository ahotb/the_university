#include <iostream>

void sumNumbers() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++){
        sum += i;  
    }

    std::cout << sum << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        sumNumbers();
    }
    return 0;
}