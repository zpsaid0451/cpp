#include <iostream>
#include <string>

using namespace std;

class Name1{
public:
  Name1(string fName, string lName){ //Overloaded constructor
    cout << "Constructor Fired" << endl;
    m_fName = new string(fName);//dynamically allocate space for f name
    m_lName = new string(lName);//dynamically allocate space for l name
  }

  ~Name1(){ //destructor (required)
    cout << "Destructor Fired" << endl;
    *m_fName = ""; //Security - remove data from m_fName
    *m_lName = ""; //Security - remove data from m_lName
    delete m_fName; //deallocate space for f name
    delete m_lName; //deallocate space for l name
    m_fName = nullptr; //Security - change pointer to point to nothing
    m_lName = nullptr; //Security - change pointer to point to nothing
  }

  Name1(const Name1& other){ //Copy Constructor
    cout << "Copy Constructor Fired" << endl;
    m_fName = new string(*other.m_fName); //Uses a string's copy constructor to copy from source
    m_lName = new string(*other.m_lName); //Uses a string's copy constructor to copy from source
  }

  Name1 &operator =(const Name1 &other){ // Overloaded Assignment operator
    cout << "Assignment Operator Fired" << endl;
    if(this != &other){ //protection against self-assignment
      delete m_fName;//deallocate old data
      delete m_lName;//deallocate old data
      m_fName = new string(*other.m_fName); //allocate new data
      m_lName = new string(*other.m_lName); //allocate new data
    }
    return *this; //return this
  }
  string getFName(){return *m_fName;}
  string getLName(){return *m_lName;}
  void setFName(string fName){m_fName = &fName;}
  void setLName(string lName){m_lName = &lName;}
  void printValue(){
    cout << "m_fName=" << *m_fName << endl;
    cout << "m_lName=" << *m_lName << endl;
  }
  void printAddress(){
    cout << "&m_fName=" << &m_fName << endl;
    cout << "&m_lName=" << &m_lName << endl;
  }

private:
  string* m_fName; //For dynamically allocating the memory (a pointer)
  string* m_lName; //For dynamically allocating the memory (a pointer)
};

int main () {
  Name1 *name1 = new Name1("Tom","Jones"); //Uses the overloaded constructor
  Name1 *name2 = new Name1(*name1); //Uses the copy constructor

  //Outputs information about name1
  cout << "NAME 1" << endl;
  cout << "&name1=" << &name1 << endl;
  name1->printValue();
  name1->printAddress(); //checks to make sure in separate memory location
  cout << endl;

  //Outputs information about name2 (which is from copy constructor)
  cout << "NAME 2" << endl;
  cout << "&name2=" << &name2 << endl;
  name2->printValue();
  name2->printAddress(); //checks to make sure in separate memory location
  cout << endl;

  //Uses assignment operator
  cout << "USING ASSIGNMENT" << endl;
  cout << "NAME 2 = NAME 1" << endl;
  *name2 = *name1; //Uses the assignment operator
  name2->printValue();
  name2->printAddress();

  //Call Destructors
  delete name1;
  delete name2;
  return 0;
}