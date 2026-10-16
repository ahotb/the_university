#include <iostream>
using namespace std;

int main(){

    cout << "Enter an Integer (You want stop Enter 0)" << endl;
    int x;
    int sum = 0, cont =0, positive = 0, negative = 0;
    while (x != 0)
    {
        cin >> x;
        sum += x;
        cont++;
        if (x > 0){
            positive++;
        }else if (x < 0){
            negative++;
        }
    }
    double avrge = 0;
    avrge = sum / cont;

    cout << "The sum: " << sum << endl;
    cout << "The avrege: " << avrge << endl;
    cout << "The positive number: " << positive << endl;
    cout << "The negative number: " << negative << endl;


    return 0;
}