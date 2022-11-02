#include "Person.cpp"

class Student: public Person{
public:
  string getSchool(){return m_school;}
  void setSchool(string school){m_school = school;}
private:
  string m_school;
};
