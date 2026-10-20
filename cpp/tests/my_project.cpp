#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // اقرأ عدد الطلاب
    int n;
    cin >> n;
    cin.ignore();
    // أنشئ الـ map لتخزين الدرجات
    map<string, int> grades;
    
    // TODO: اكتب الكود الخاص بك هنا
    // اقرأ اسم كل طالب ودرجته، ثم أضفهما إلى الـ map
    string name;
    int grade;
    for (int i = 0; i < n;i++){
        cin >> name;
        cin >> grade;
        // grades.insert({name, grade});
        grades[name] = grade;
    }
    
    // اطبع النتائج
    cout << "Student Grades:" << endl;
    // TODO: استخدم حلقة for قائمة على النطاق لطباعة درجة كل طالب
    for (const auto &part : grades){
        cout << part.first << ": " << part.second << endl;
    }
    
    // اطبع العدد الإجمالي للطلاب
    cout << "Total students: " << grades.size() << endl;
    
    return 0;
}