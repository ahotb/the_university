#include <iostream>

int sigma(int n) {
    int temp = 0;
    for (int i = 0; i <= n; i++){
        temp += i;
    }
    return temp;
}

int main() {
    int n;
    std::cin >> n;
    int res = sigma(n);
    std::cout << res;
    return 0;
}