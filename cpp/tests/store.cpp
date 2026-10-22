#include <iostream>
#include <map>
#include <string>
#include <climits>
using namespace std;

int main() {
    // TODO: اكتب الكود الخاص بك أدناه
    std::map<std::string, int> inventory = {
        {"apples", 50},
        {"bananas", 30},
        {"oranges", 25},
        {"grapes", 40},
        {"strawberries", 15}
    };
   cout << "===== INVENTORY REPORT =====\n";
   int totalQuantity = 0, high = 0;
   int low = INT_MAX;
   string highStr = "" , lowStr = "";
   for (auto pair : inventory){
    cout << pair.first << ": " << pair.second << endl;
        totalQuantity += pair.second;
        if (high < pair.second){
            high = pair.second;
            highStr =  pair.first;
        }
        if (low > pair.second){
            low = pair.second;
            lowStr = pair.first;
        }
   }
    cout << "===== SUMMARY =====\n";
    cout << "Total items: " << inventory.size() << endl;
    cout << "Total quantity: " << totalQuantity << endl;
    cout << "Highest stock: " << highStr << " (" << high << ")" << endl;
    cout << "Lowest stock: " <<   lowStr << " (" << low << ")" << endl;
    return 0;
}