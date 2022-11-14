#include <iostream>
#include <string>

using namespace std;

class Name1{
public:
  Name1(string fName, string lName){ //Dynamically allocates the strings
    m_fName = new string(fName);
    m_lName = new string(lName);
    }
  ~Name1(){delete m_fName; delete m_lName;} //Must add a destructor to deallocate
  string* getFName(){return m_fName;}
  string* getLName(){return m_lName;}
  void setFName(string fName){*m_fName = fName;}
  void setLName(string lName){*m_lName = lName;}
private:
  string* m_fName; //For dynamically allocating the memory (a pointer)
  string* m_lName; //For dynamically allocating the memory (a pointer)
};

int main () {
  Name1 name1("Tom","Jones"); //Uses the overloaded constructor
  return 0;
}
