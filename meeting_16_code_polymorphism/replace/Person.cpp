#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
  string GetFName(){return m_fName;}
  string GetLName(){return m_lName;}
  void SetFName(string name){m_fName = name;}
  void SetLName(string name){m_lName = name;}
  virtual void Print(){
    cout << "PERSON: " << m_fName << " " << m_lName << endl;
  }
private:
  string m_fName;
  string m_lName;
};


#endif
