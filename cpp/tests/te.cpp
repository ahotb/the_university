#include <iostream>
#include <set>
using namespace std;

int main() {
    // قراءة عدد العناصر المراد إضافتها إلى المجموعة
    int n;
    cin >> n;
    
    // إنشاء مجموعة فارغة
    set<int> numbers;
    
    // قراءة وإدراج n من العناصر في المجموعة
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        numbers.insert(element);
    }
    
    // قراءة عدد العناصر المراد البحث عنها
    int m;
    cin >> m;
    
    int foundCount = 0;
    
    // TODO: اكتب الكود الخاص بك أدناه
    // لكل عنصر بحث:
    // 1. قراءة قيمة البحث
    // 2. استخدام numbers.count(searchValue) للتحقق مما إذا كان موجوداً
    // 3. طباعة الرسالة المناسبة
    // 4. تحديث foundCount إذا تم العثور على العنصر
    for (int i = 0; i < m; i++){
        int mn;
        cin >> mn;
        if (numbers.count(mn)){
            cout << "Searching for " << mn << ":" << " Found" << endl;
            foundCount++;
        }else{
            cout << "Searching for " << mn << ":" << " Not found" << endl;
        }
        
    }
    // طباعة الملخص
    cout << "Total found: " << foundCount << " out of " << m << endl;
    
    return 0;
}