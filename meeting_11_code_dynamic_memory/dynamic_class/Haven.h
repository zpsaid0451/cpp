#ifndef HAVEN_H
#define HAVEN_H
#include "Dragon.h"

class Haven{
 public:
  Haven(){
    m_haven = new Dragon[0];
    m_havenSize = 0;
  }
  
  Haven(int size){
    m_haven = new Dragon[size];
    m_havenSize = size;
  }
    
  ~Haven(){
    delete [] m_haven;
    m_haven = NULL;
  }
  
  void addDragon(Dragon newDragon){
    // iteral over source copy over to the destination( *m_haven)
    Dragon *tempHaven = new Dragon[m_havenSize + 1]; //Create new temp haven 1 larger than current
    for(int i = 0; i < m_havenSize; i++){
      tempHaven[i] = m_haven[i];
    }
    //push back to the end.
    tempHaven[m_havenSize] = newDragon;
    //size wrong so ++
    m_havenSize++;
    //delete 
    delete [] m_haven;
    // and add right size
    m_haven = new Dragon[m_havenSize];
    //copy over , so not lose anything 
    for(int i = 0; i < m_havenSize; i++){
      // source to the destination( *m_haven)
      m_haven[i] = tempHaven[i];
    }
    // clean up temHaven
    delete [] tempHaven;
  }

  friend ostream &operator<<(ostream &output, Haven &myHaven){
    for(int i = 0; i < myHaven.m_havenSize; i++)
      output << myHaven.m_haven[i] << endl;
    return output;
  }
  
private:
  Dragon *m_haven; // pointer for hold dynamic array for dragon object
  int m_havenSize;
};


#endif
