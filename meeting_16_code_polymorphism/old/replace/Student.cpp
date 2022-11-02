#include "Person.cpp"

class Student: public Person{ //new class that inherits from person
public:
  int getStuID(){return m_stuID;} //Accessor (getter)
  void setStuID(int stuID){m_stuID = stuID;} //Mutator (setter)
  void printFullName(){
      cout << "STUDENT: " <<  m_fName << " " << m_lName << endl; //This is the "Student" version of the function
  }
private:
  int m_stuID;
};
