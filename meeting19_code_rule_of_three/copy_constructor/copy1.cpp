#include <iostream>
#include <string>

using namespace std;

class Name1{
public:
  Name1(string fName, string lName){ //Overloaded constructor
    cout << "Constructor Fired" << endl;
    m_fName = fName;
    m_lName = lName;
  }
  ~Name1(){
    cout << "Destructor Fired" << endl;
    //delete m_fName;
    //delete m_lName;
  } //Must add a destructor to deallocate

  Name1(const Name1& other){ //Copy Constructor
    cout << "Copy Constructor Fired" << endl;
    m_fName = other.m_fName;
    m_lName = other.m_lName;
  }
  string getFName(){return m_fName;}
  string getLName(){return m_lName;}
  void setFName(string fName){m_fName = fName;}
  void setLName(string lName){m_lName = lName;}
  void printValue(){
    cout << "m_fName=" << m_fName << endl;
    cout << "m_lName=" << m_lName << endl;
  }
  void printAddress(){
    cout << "&m_fName=" << &m_fName << endl;
    cout << "&m_lName=" << &m_lName << endl;
  }

private:
  string m_fName; //For dynamically allocating the memory (a pointer)
  string m_lName; //For dynamically allocating the memory (a pointer)
};

int main () {
  Name1 *name1 = new Name1("Tom","Jones"); //Uses the overloaded constructor
  Name1 *name2 = new Name1(*name1); //Uses the copy constructor
  cout << "&name1=" << &name1 << endl;
  cout << "&name2=" << &name2 << endl;
  name1->printValue();
  name1->printAddress();
  name2->printValue();
  name2->printAddress();
  return 0;
}
