/*Title: linked1.cpp
Author: CMSC 202
Date: 10/13/2022
Description: This is introducing linked lists in C++.
*/

#include <iostream>
using namespace std;

//Each node of the linked list holds at least one piece of data and
//at least one pointer (usually to the m_next node in the linked list)
struct Node {
  int m_info; //Data for the linked list
  Node *m_next; //Pointer to the m_next node of the linked list
};

class LinkedList{ //Linked list structure
public:
  LinkedList(); //Default constructor that builds an empty linked list
  ~LinkedList(); //Destructor that cleans up linked list
  void insert_begin(); //Function that inserts new nodes at the beginning of the linked list
  void display(); //Function that iterates over the linked list to display the contents
private:
  Node *m_head; //Pointer to the beginning of the linked list
  Node *m_tail; //Pointer to the end of the linked list
  int m_size; //Counter for the size of the linked list
};

LinkedList::LinkedList(){
  m_head = nullptr; //Sets the pointer to point at nothing
  m_tail = nullptr; //Sets the pointer to point at nothing
  m_size = 0; //Sets the size of the linked list to 0
}

LinkedList::~LinkedList(){
  Node *curr = m_head;
  while(curr != nullptr){ //Iterates through and removes each node
    m_head = curr; //sets m_head to curr
    curr = curr ->m_next; //moves curr to next node
    delete m_head; //delete m_head;
  }
  //Resets all of the static linked list pointers
  m_head = nullptr; //Sets the pointer to point at nothing
  m_tail = nullptr; //Sets the pointer to point at nothing
  m_size = 0; //Sets the size of the linked list to 0
}

void LinkedList::insert_begin(){
  Node *temp = new Node(); //Builds a new node
  temp->m_next = nullptr;
  temp->m_info = 1;
  if(m_head == nullptr){ //Checks to see if the linked list is empty
    m_head = temp; //Inserts the first node to the linked list
    m_tail = temp; //Inserts the first node to the linked list
  }
  else{
    temp->m_next = m_head; //Because this is inserting in the beginning
    m_head = temp; //After the new node is set to point to the first node, we then set the new node to be the beginning of the list
  }
  m_size++; //Increments the size of the linked list
}

void LinkedList::display(){
  if(m_size==0){ //Checks to see if the linked list is empty
    cout << "The linked list is empty" << endl; //Output if it is empty
	return;
  }
  else{
    Node *temp = m_head; //Creates a new pointer to iterate over list
    for(int i = 0; i < m_size; i++){ //Iterates to end of list
      cout << temp->m_info << "->"; //Outputs value in node
      temp = temp->m_next; //Moves to m_next node
    }
    cout << "END" << endl; //Indicates the end of the linked list
  }
}

int main () {
  LinkedList list1; //Creates a new, empty linked list
  list1.display(); //Outputs the linked list (empty)
  list1.insert_begin(); //Inserts a node (the first node!)
  list1.insert_begin(); //Inserts a node
  list1.display(); //Outputs the linked list (should have two nodes each with a value of 1)
  list1.insert_begin(); //Inserts a node
  list1.insert_begin(); //Inserts a node
  list1.display(); //Outputs the linked list (should have four nodes each with a value of 1)
  return 0;
}