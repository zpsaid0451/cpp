/*Title: Person.cpp
Author: CMSC 202
Date: 10/17/2022
Description: This is introducing inheritance in C++. This file is the parent class.
*/
#ifndef PERSON_H //Header guards
#define PERSON_H //Header guards

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
  string getFName(){return m_fName;} //Accessor (getter)
  string getLName(){return m_lName;} //Accessor (getter)
  void setFName(string fName){m_fName = fName;} //Mutator (setter)
  void setLName(string lName){m_lName = lName;} //Mutator (setter)
private:
  string m_fName;
  string m_lName;
};

#endif
