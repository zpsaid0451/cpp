#include "Person.cpp"

class Student: public Person{
public:
  void Print(){
    cout << "STUDENT: " << GetFName() << " " << GetLName() << endl;
  }
private:
};
