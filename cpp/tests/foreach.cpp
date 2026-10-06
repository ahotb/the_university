#include <iostream>
#include <string>


int main() {
    // تهيئة مصفوفة الفواكه
    std::string fruits[] = {"apple", "banana", "orange", "grape", "kiwi"};

    // استخدام حلقة for محسنة للتكرار عبر المصفوفة
    for (std::string fruit : fruits){
        std::cout << fruit << std::endl;
    }
    return 0;
}