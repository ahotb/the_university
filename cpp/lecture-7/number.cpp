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
    if (cont > 1){
    cout << "The number of positives is " << positive << endl;
    cout << "The number of negatives is " << negative << endl;
    cout << "The total is  " << --cont << endl;
    cout << "The average is " << avrge << endl;
    }else{
        cout << "Enter an integer, the input ends if it is 0: " << --cont << endl;
    }
   
    


    return 0;
}