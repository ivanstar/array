#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i];
  }
  cout << endl;
}
// Implement reverseArray here
void reverseArray(int array[], int size)
{
  int temp;
  for (int i = 0; i < size/2; i++)
  {
    temp = array[i];
    array[i] = array[(size -1) - i];
    array[(size - 1) - i] = temp;
  }
}

// DO NOT WRITE ANY CODE BELOW THIS LINE (EXCEPT FOR TESTING)
int main()
{
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Contents of array : ";
	printArray(myarray, n);
	reverseArray(myarray, n);
	cout << "Contents of array after reversing : ";
	printArray(myarray, n);
}
