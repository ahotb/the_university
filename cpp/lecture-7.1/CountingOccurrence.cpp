#include <iostream>
using namespace std;

int linearSearch(const int [], int, int);

int main()
{
  int list[] = {4, 5, 1, 2, 9, -3};
  cout << linearSearch(list, 2, 8) << endl;

  return 0;
}

int linearSearch(const int list[], int key, int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    if (key == list[i])
      return i;
  }

  return -1;
}