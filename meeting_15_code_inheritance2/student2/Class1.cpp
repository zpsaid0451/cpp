#ifndef CLASS1_CPP //Guard
#define CLASS1_CPP //Guard
#include <vector>
#include "Student.cpp" //Need student because student is used in class1

class Class1{
public:
  void printClass(){ //Function that iterates over the vector to output
    for(int i = 0; i < int(m_class.size()); i++) {
      cout << m_class.at(i).getLName() << ", " << m_class.at(i).getFName() << endl;
    }
  }
  void addStudent(Student newStudent){ //Function that adds a student to the m_class vector
    m_class.push_back(newStudent);
  }
private:
  vector<Student> m_class;
};

#endif
