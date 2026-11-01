#include <iostream>
using namespace std;

int main() {
    // قراءة المدخلات
    int num1, num2;
    char operation;
    cin >> num1 >> num2 >> operation;
    
    // TODO: إنشاء تعبيرات لامدا لعمليات الجمع والطرح والضرب
    // TODO: استخدام جملة if-else أو switch لاستدعاء تعبير لامدا المناسب بناءً على العملية
    auto add = [](int a, int b){
        cout << "Sum: " << a + b << endl;
    };
    auto subtract = [](int a, int b){
        cout << "Difference: " << a - b << endl;
    };
    auto multiply = [](int a, int b){
        cout << "Product: " << a * b << endl;
    };
    switch (operation){
        case '+':
        add(num1 , num2);
        break;
        case '-':
        subtract(num1 , num2);
        break;
        case '*':
        multiply(num1, num2);
        break;
    }

    return 0;
}