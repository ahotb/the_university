#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // قراءة عدد الكتب
    int n;
    cin >> n;
    
    // إنشاء خريطة المكتبة
    map<string, int> library;
    
    // قراءة معلومات الكتاب وملء الخريطة
    for (int i = 0; i < n; i++) {
        string title;
        int copies;
        cin >> title >> copies;
        library[title] = copies;
    }
    
    // قراءة عدد طلبات الكتب
    int m;
    cin >> m;
    
    // TODO: اكتب كودك أدناه
    // معالجة كل طلب كتاب باستخدام طريقة .count()
    // التحقق مما إذا كان الكتاب موجوداً وطباعة الرسالة المناسبة
    string lib;
    int num;
    for (int i = 0; i < m; i++){
        cin >> lib , num;
        if (library.count(lib)){
            cout << "Book " << "\"" << lib << "\"" <<  "is available with " <<  library[lib]  << " copies" << endl;
        }else{
            cout << "Book " << "\"" << lib << "\"" <<  "is not available in the library" << endl;
        }
    }
    return 0;
}