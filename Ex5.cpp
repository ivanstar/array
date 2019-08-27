#include <iostream>

using namespace std;

void print(int array[], int size)
{
  for (int i = 0; i < size;i++)
  {
    cout << array[i] << " ";
  }
}

int findSmall(int array[],int size)
{
    int smallValue = array[0];
    for (int i = 0;i < size;i++)
    {
      if (smallValue > array[i])
      {
        smallValue = array[i];
      }
    }
    return smallValue;
}


int main()
{
  int arr[100];
  int size, small;
  cout << "Enter array size: ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  print(arr,size);
  cout << "\nFinding smallest value.." << endl;
  findSmall(arr,size);
  //cout << small;

  return 0;
}

