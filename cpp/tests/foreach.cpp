#include <iostream>
#include <string>

int mystery ( int number )
{
   if ( number <= 1 )
      return 1;
   else
      return number * mystery( number - 1 );
}
int main() {
    std::cout << mystery(4) << std::endl;
    return 0;
}