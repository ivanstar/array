//Write program to take string and function to print it backwards
//Write function isPalindrome to determine if it is palindrome. Ex. racecar.

#include <iostream>
#include <string>

using namespace std;

//print string array
void printString(string myarray[], int size)
{
  for (int i = 0 ; i < size; i++)
  {
    cout << myarray[i];
  }
  cout << endl;
}

void reverseString(string myarray[], int size)
{
  string temp;
  for (int i = 0; i < size /2; i++)
  {
    temp = myarray[i];
    myarray[i] = myarray[(size -1) - i];
    myarray[(size-1) - i] = temp;
  }
}

bool isPalindrome(string myarray[], int size)
{
  bool flag;

  for (int i = 0 ; i < size/2 ; i++)
  {
    if (myarray[i] == myarray[size-1-i])
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

  string myarray[100];
  string word;
  int wordLength;

  cout << "Please enter a string: ";
  cin >> word;
  wordLength = word.length();


  for (int i = 0 ; i < wordLength; i++)
  {
    myarray[i] = word.substr(i,1);
  }

  printString(myarray, wordLength);
  cout << "After calling reverse string function.." << endl;
  reverseString(myarray, wordLength);
  printString(myarray, wordLength);
  cout << "After calling palindrome function.." << endl;
  if (isPalindrome(myarray, wordLength) == true)
  {
    cout <<  word << " is a palindrome word.";
  }
  else
  {
    cout << word << " is not a palindrome word.";
  }



  return 0;
}
