#include <iostream>
using namespace std;

int main()
{
  // Initialize data and sum
  int data = 0;
  int sum = 0;

  do
  {
    sum += data;

    // Read the next data
    cout << "Enter an integer (the input ends " <<
      "if it is 0): ";
    cin >> data; // Keep reading data until the input is 0
  }
  while (data != 0);

  cout << "The sum is " << sum << endl;

  return 0;
}