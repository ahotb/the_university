#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // قراءة عدد المنتجات الأولية
    int n;
    cin >> n;
    
    // إنشاء خريطة المخزون
    map<string, int> inventory;
    
    // قراءة المنتجات الأولية وكمياتها
    for (int i = 0; i < n; i++) {
        string product;
        int quantity;
        cin >> product >> quantity;
        // TODO: إضافة المنتج إلى خريطة المخزون
        inventory[product] = quantity;
    }
    
    // TODO: طباعة المخزون الأولي
    for (auto pair : inventory){
        cout << "Initial Inventory:" << endl;
        cout << pair.first << ": " << pair.second << endl;
    }

    // قراءة المنتج المراد تحديثه والكمية الجديدة
    string updateProduct;
    int newQuantity;
    cin >> updateProduct >> newQuantity;
    
    // TODO: تحديث كمية المنتج في الخريطة
    for (int i =0; i < n; i++){
        inventory[updateProduct] = newQuantity;
    }
    // TODO: طباعة المخزون المحدث
     for (auto par : inventory){
        cout << "Updated Inventory:" << endl;
        cout << par.first << ": " << par.second << endl;
    }
    return 0;
}