#include "Person.cpp"

class Student: public Person{ //new class that inherits from person
public:
  int getStuID(){return m_stuID;} //Accessor (getter)
  void setStuID(int stuID){m_stuID = stuID;} //Mutator (setter)
private:
  int m_stuID;
};
