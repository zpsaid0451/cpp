/*Title: Person.cpp
Author: CMSC 202
Date: 3/30/2021
Description: This is introducing overriding (replacing) in C++. This file is the parent class.
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
  void printFullName(){
      cout << "PERSON: " << m_fName << " "
	   << m_lName << endl; //This is the "Person" version of the function
  }
protected:
  string m_fName;
  string m_lName;
};

#endif
