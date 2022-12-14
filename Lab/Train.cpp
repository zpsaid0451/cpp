#include "Train.h"

// Constructor
// Gets the linked list ready to be used
Train::Train(){
  m_head = nullptr;
  m_size = 0;
}

// Destructor
// Removes all the train cars from the train
Train::~Train(){
  TrainCar* next = m_head->m_next;
  while(next != nullptr){ // iterates through the list until the end is found
    delete m_head; // delete the head
    m_head = next; // iterate m_head
    next = next->m_next; // iterate the next ptr
  }
  delete m_head; // clean up the last node
  m_head = nullptr; // always set hanging pointers to nullptr
}

// COMPLETE THIS FUNCTION
// insert a train car into the back of the train
void Train::InsertCar(string name){
	TrainCar *ptr =new TrainCar();
     TrainCar *curr = m_head;
     TrainCar *prev = curr;
     ptr->m_name =name;
     //curr = curr->m_next;
     if (m_size ==0){
       m_head = ptr;
       ptr->m_next = nullptr;
       m_size++;
       return;
     }else {
       while (curr->m_next != nullptr)
         {
           curr = curr->m_next;
         }
       ptr->m_next = nullptr;
       curr->m_next = ptr;
       m_size++;
     }

}

// COMPLETE THIS FUNCTION
// remove the last train car
void Train::RemoveLast(){
	TrainCar *curr = m_head;
	while (curr->m_next == nullptr)
		{
		m_head->m_next;
		delete curr;
		curr = nullptr;
		}

}

// display()
// iterates through the train and says all their names
void Train::Display(){
  TrainCar* current = m_head;

  while(current != nullptr){ // iterate through the list
    cout << current->m_name << " -> ";
    current = current->m_next;
  }
 cout << "END" << endl << "Size: " << m_size << endl;
}
