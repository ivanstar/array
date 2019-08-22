#include <iostream>

using namespace std;

void print(int *array, int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
}

//The function must remove all negative values in the array,
//modify the value of size variable, and return the sum of the remaining values
//Index	0	1	2	3	4	5	6
//Value	4	-2	6	1	-3 -9 -5
//Size: 7
int FindSum(int* array, int &size)
{
  int count = 0;
  for(int i = 0; i < size-1; i++)
  {
    if (array[i] <= 0)
    {
      array[i] = array[i+1];

    }
    //count++;
  }

  for (int i = 0; i < size-1;i++)
  {
    if(array[i] >= 0)
    {
      count++;
    }
  }

  return count;
}

int main()
{

  int* a_ptr = nullptr;
  int size;
  int x;

  cout << "Enter array size:";
  cin >> size;
  a_ptr = new int[size];

  for (int i = 0; i < size;i++)
  {
    cin >> a_ptr[i];
  }

  print(a_ptr,size);
  cout << endl;
  x = FindSum(a_ptr,size);
  print(a_ptr,size);
  cout << "\nsize: " << x;


  delete []a_ptr;
  a_ptr = nullptr;
  return 0;
}
