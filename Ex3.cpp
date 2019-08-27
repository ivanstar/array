//Bubble sort

#include <iostream>

using namespace std;
void print(int array[], int size)
{
  for (int i = 0; i < size;i++)
  {
    cout << array[i] << " ";
  }
}

//Bubble sort - Descending
void deSort(int array[],int size)
{

  bool swap;
  int temp;
  do
  {
    swap = false;
    for (int i = 0; i < size; i++)
    {
      if (array[i+1] > array[i])
      {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        swap = true;
      }
    }
  } while(swap);

}

//Ascending sort
void aSort(int array[], int size)
{
  int temp;
  for (int k = 0; k < size-1; k++)
  {
    for (int i = 0; i < size-k-1;i++)
    {
      if (array[i] < array[i+1])
      {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
      }
    }
  }
}

int main()
{
  int arr[100];
  int size;
  cout << "Enter array size: ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  deSort(arr,size);
  print(arr,size);
  cout << endl;
  cout << "After calling ascending sort.." << endl;
  aSort(arr,size);
  print(arr,size);


  return 0;
}
