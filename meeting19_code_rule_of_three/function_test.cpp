/*Title: rule_of_three.cpp
Author: CMSC 202
Date: 11/10/2022
Description: This is an example of using the rule of three in C++.
Which function is being called?!
*/
#include <iostream>
#include <cstring>
using namespace std;

class rule_of_three{
public:
  rule_of_three(){ //default constructor
    cout << "default" << endl;
    m_cstring = nullptr;
  }
  rule_of_three(char* arg){ //Overloaded constructor
    cout << "overload con1" << endl;
    //m_cstring = arg;
    m_cstring = new char[strlen(arg)+1];
    strcpy(m_cstring, arg);
  }
  rule_of_three(const char* arg): //Overloaded constructor 2
    m_cstring(new char[strlen(arg)+1]){
    cout << "overload con2" << endl;
    strcpy(m_cstring, arg);
  }
  ~rule_of_three(){ //destructor
    delete[] m_cstring;
  }
  rule_of_three(const rule_of_three& other){ //copy constructor
    cout << "copy" << endl;
    m_cstring = new char[strlen(other.m_cstring)+1];
    strcpy(m_cstring, other.m_cstring);
  }
  rule_of_three& operator=(const rule_of_three& other) { //assignment operator
    cout << "assign" << endl;
    char* tmp_cstring = new char[strlen(other.m_cstring)+1];
    strcpy(tmp_cstring, other.m_cstring);
    delete[] m_cstring;
    m_cstring = tmp_cstring;
    return *this;
  }

private:
  char* m_cstring;
};

int main () {
  rule_of_three test1 = "Candy"; //Which function is called?
  //constru 2
  rule_of_three test2; //Which function is called?
  rule_of_three test3(test1); //Which function is called?
  char cstring1[] = "Test";
  //string cstring1 = "Test";
  rule_of_three test4(cstring1); //Which function is called?
  //over constr 1
  test2 = test1; //Which function is called?
  
  return 0;
}
