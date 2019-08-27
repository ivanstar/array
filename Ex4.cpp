#include <iostream>
#include <string>

using namespace std;

void print(int array[], int size)
{
  for (int i = 0; i < size;i++)
  {
    cout << array[i] << " ";
  }
}

bool determine(int array[],int size)
{
  bool flag;
  for (int i = 0 ; i < size-1; i++)
  {
    if(array[i] < array[i+1])
    {
      flag = true;
    }
    else
    {
      flag = false;
    }
  }
  return flag;
}

int main()
{
  int array[100];
  int size;
  cout << "Size for array:";
  cin >> size;

  for (int i =0; i < size; i++)
  {
    cin >> array[i];
  }

  print(array,size);
  if(determine(array,size) == true)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }



  return 0;
}
