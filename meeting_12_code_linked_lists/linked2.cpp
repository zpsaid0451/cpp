/*Title: linked2.cpp
Author: CMSC 202
Date: 10/13/2022
Description: This is introducing linked lists in C++.
*/
#include <iostream>
using namespace std;

struct Node{
public:
  int m_info; //Data
  Node *m_next; //Node pointer
};

class LinkedList{
public:
  LinkedList(); //constructor
  ~LinkedList(); //destructor
  void insert_begin(int data); //insert function
  void removeAt(int); //Remove at location
  void display(); //iterating function
private:
  Node *m_head; //Track front of linked list
  Node *m_tail; //Track back of linked list
  int m_size; //Track size of linked list
};

LinkedList::LinkedList(){
  m_head = nullptr;
  m_tail = nullptr;
  m_size = 0;
}

LinkedList::~LinkedList(){
  cout << "Destructor" << endl;
  Node *curr = m_head;
  while(curr != nullptr){
    m_head = curr;
    curr = curr->m_next;
    delete m_head;
  }
  m_head = nullptr;
  m_tail = nullptr;
  m_size = 0;
}

void LinkedList::insert_begin(int data){
  Node *newNode = new Node();
  newNode->m_info = data;
  newNode->m_next = m_head;
  m_head = newNode;
  if(m_size == 0){
    m_tail = newNode;
  }
  m_size++;
}

void LinkedList::removeAt(int location){
  Node *curr = m_head;
  Node *prev = m_head;
  int counter = 0;
  while(curr != nullptr){
    if(counter == location){
      prev->m_next = curr->m_next;
      delete curr;
      return;
    }
    prev = curr;
    curr = curr->m_next;
    counter++;
  }
  m_size--;
}

void LinkedList::display(){
  if((m_size == 0) || (m_head == nullptr)){
    cout << "No nodes to display" << endl;
    return;
  }else{
    Node *curr = m_head;
    while(curr != nullptr){
      cout << curr->m_info << "->";
      curr = curr->m_next;
    }
    cout << endl;
  }
}

int main () {
  LinkedList list1;
  list1.display();
  list1.insert_begin(10);
  list1.insert_begin(20);
  list1.insert_begin(30);
  list1.insert_begin(40);
  list1.insert_begin(50);
  list1.display();
  list1.removeAt(2);
  list1.display();
  return 0;
}
