#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person{
public:
  Person(){
    m_fName = "First Name";
    m_lName = "Last Name";
  }
  Person(string fName, string lName){
    m_fName = fName;
    m_lName = lName;
  }
  string getFName(){return m_fName;}
  string getLName(){return m_lName;}
  void setFName(string fName){m_fName = fName; }
  void setLName(string lName){m_lName = lName; }
  
private:
  string m_fName;
  string m_lName;
};


#endif
