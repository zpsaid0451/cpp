#ifndef STUDENT_CPP
#define STUDENT_CPP

#include "Person.cpp"

class Student: public Person{ //new class that inherits from person
public:
  int getStuID(){return m_stuID;} //Accessor (getter)
  void setStuID(int stuID){m_stuID = stuID;} //Mutator (setter)
  //Add Print function in both Person and Student that are different implementations
private:
  int m_stuID;
};

#endif
