#include <iostream>
using namespace std;

int main(){

    double a,b,c,x1,x2;
    cin >> a >> b >> c;
    int d = b*b - 4 * a * c;
    if (d >= 0){
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        cout << "x1 = "  << x1 << endl;
        cout << "x2 = "  << x2 << endl;
}else {
    cout << "Not root" << endl;
}
    return 0;
}