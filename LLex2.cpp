#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node* link;
};

void insertFront(Node* &head, int value)
{
  Node* temp = new Node();
  temp->data = value;
  temp->link = head;
  head = temp;
}

void print(Node* &head)
{
  Node* current;
  current = head;

  while(current != NULL)
  {
    cout << current->data << " ";
    current = current->link;
  }
}

void insert(Node* &head, int value, int position)
{
  Node* temp = new Node();
  temp->data = value;
  temp->link = NULL;

  Node* current = head;
  //Node* prev;
  //Node* next;

  if(position == 1)
  {
    temp->link = head;
    head = temp;
    return;
  }

  for (int i = 0; i < position-2;i++)
  {
    current = current->link;
  }

  temp->link = current->link;
  current->link = temp;




}

int main()
{
  Node* head = nullptr;
  insertFront(head, 8);
  insertFront(head, 7);
  insertFront(head, 6);
  print(head);
  int pos, value;
  cout << "\nEnter pos: ";
  cin >> pos;
  cout << "\nEnter value: ";
  cin >> value;

  insert(head, value, pos);
  print(head);
  return 0;
}
