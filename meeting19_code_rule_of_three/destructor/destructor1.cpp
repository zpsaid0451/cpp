#include <iostream>
#include <string>

using namespace std;

class Name1{
public:
  Name1(){}
  Name1(string fName, string lName){
    m_fName = fName;
    m_lName = lName;
    }
  string getFName(){return m_fName;}
  string getLName(){return m_lName;}
  void setFName(string fName){m_fName = fName;}
  void setLName(string lName){m_lName = lName;}
private:
  string m_fName;
  string m_lName;
};

int main () {
  Name1* name1 = new Name1("Tom","Jones"); //The memory must be deallocated in the same
  //scope that it is declared. It was dynamically allocated here so it must be
  //deallocated here.
  delete name1;
  return 0;
}
