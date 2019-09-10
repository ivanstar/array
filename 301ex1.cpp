#include <iostream>

using namespace std;

int main()
{
  int Table[5];
  int count = 0;
  int avg;
  int less = 0;
  int same = 0;
  int greater = 0;
  int value;
  int decision;

  cout << "Enter number into array " << endl;

  for (int i = 0; i < 5; i++)
  {
    cin >> Table[i];
    //count++;
    if(Table[i] < 0)
    {
      break;
    }
    else if(Table[i] > 0)
    {
      count++;
    }
  }
  cout << endl;
  cout << count << " numbers were read into the array." << endl;

  cout << "The array content is..";
  for (int i = 0; i < 5; i++)
  {
    cout << Table[i] << " ";
  }
//Find and print the average.
  for(int i = 0; i < 5; i++)
  {
    avg += Table[i];
  }
  cout << endl;
  avg = avg/count;
  cout << "\nThe average is: " << avg << endl;


//Find and print how many of the numbers are less than the average calculated above,
//how many are exactly the same value as the average, and how many were greater than the average. Test and make sure it works.
  for(int i = 0; i < 5; i++)
  {
    if(Table[i] < avg)
    {
      less++;
    }
    if(Table[i] == avg)
    {
      same++;
    }
    if(Table[i] > avg)
    {
      greater++;
    }
  }

  cout << "There are " << less << " numbers less than the average." << endl;
  cout << "There are " << same << " numbers same as the average." << endl;
  cout << "There are " << greater << " numbers greater than the average." << endl;


  do
  {
    cout << "Enter number to find: ";
    cin >> value;
    cout << "=====================================" << endl;
    for(int i = 0; i < 5; i++)
    {
      if(value == Table[i])
        {
          cout << value << " is found at index " << i+1 << endl;
          break;
        }
      else
      {
        cout << "Not found." << endl;
      }
    }

    cout << "=====================================" << endl;
    cout << "1. Continue" << endl;
    cout << "2. Stop" << endl;
    cin >> decision;

  } while(decision != 2);

  int smallest = Table[0];

  for (int i = 0; i < 5; i++)
  {
    if(smallest > Table[i])
    {
      smallest = Table[i];
      cout << "Smallest Integer: " << smallest << " is at index " << i+1;
    }
  }





  return 0;
}
