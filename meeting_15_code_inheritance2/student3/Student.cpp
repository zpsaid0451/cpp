#ifndef STUDENT_CPP
#define STUDENT_CPP
#include "Person.cpp"

class Student: public Person{
public:
  string getMajor(){return m_major;}
  string getStuId(){return m_stuId;}
  void setMajor(string major){m_major = major;}
  void setStuId(string stuId){m_stuId = stuId;}
private:
  string m_major;
  string m_stuId;
};

#endif
