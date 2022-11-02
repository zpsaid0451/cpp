#ifndef CLASS1_CPP
#define CLASS1_CPP
#include <vector>
#include "Student.cpp"

class Class1{
public:
  void printClass(){
    for(unsigned int i = 0; i < m_class.size();i++){
      cout << m_class.at(i).getLName() << ", " << m_class.at(i).getFName() << endl;
    }
  }
  void addStudent(Student newStudent){
    m_class.push_back(newStudent);
  }
private:
  vector<Student> m_class;
};
#endif
