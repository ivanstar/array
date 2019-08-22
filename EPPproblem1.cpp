#include <iostream>

using namespace std;

void findAverage(int *array, int size)
{
  int highest = array[0];
  int lowest = array[0];
  for (int i = 0; i < size; i++)
  {
    if(highest < array[i])
    {
      highest = array[i];
    }
    else if(lowest > array[i])
    {
      lowest = arrray[i];
    }
  }
}

int main()
{
  int *a_ptr = nullptr;
  int size;
  cout << "Number of judges: ";
  cin >> size;

  a_ptr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }




  return 0;
}
