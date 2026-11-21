#include <iostream>
using namespace std;

class rectangular
{
public:
  
  double length, width;

  rectangular()
  {
    length = 1;
    width = 1;
  }

  rectangular(double newlenght, double newwidth)
  {
    length = newlenght;
    width = newwidth;
  }

  double getArea()
  {
    return length * width;
  }

  double getPermeter()
  {
    return 2 * (length * width);
  }
}; 

int main()
{
  rectangular rectangular1(5, 6);
  
    cout << "The area of the rectangular of " << rectangular1.getArea() << endl;
    cout << "The area of the rectangular of " << rectangular1.getPermeter() << endl;

    return 0;
}