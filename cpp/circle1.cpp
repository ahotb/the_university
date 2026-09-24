#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius;
    double area;
    const double PI = 3.14159;
    cout << "Enter a number : ";
    cin >> radius;
    if(radius >= 0){
    area = radius * radius * PI;
    cout << "The area is ";
    cout << area << endl;
   }else{
    cout << "This is not true" << endl;
   }
   }