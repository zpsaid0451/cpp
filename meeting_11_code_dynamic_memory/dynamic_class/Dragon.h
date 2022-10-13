#ifndef DRAGON_H
#define DRAGON_H
#include <iostream>
#include <string>
using namespace std;

class Dragon{
 public:
  Dragon(){ //Default constructor
    m_name = "Baby";
    m_length = 1;
  }
  
  Dragon(string name, int length){ //Overloaded constructor
    m_name = name;
    m_length = length;
  }
  
  friend ostream &operator<< (ostream &output, Dragon &myDragon){ //Overloaded operator
    output << myDragon.m_name << " with a length of " << myDragon.m_length;
    return output;                                        // can oyrput anywhere m_name and m_length. main ect...
    
  }
  
 private:
  string m_name; //Private Member Variables
  int m_length; //Private Member Varibles
};


#endif
