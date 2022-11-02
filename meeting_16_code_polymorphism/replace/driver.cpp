#include "Person.cpp"
#include "Student.cpp"
#include <vector>

int main () {
  Person *newPerson = new Person();
  newPerson->SetFName("Samwise");
  newPerson->SetLName("Gamgee");
  
  Person *newStudent = new Student();
  newStudent->SetFName("Peregrin");
  newStudent->SetLName("Took");

  vector<Person*> newVector;
  newVector.push_back(newPerson);
  newVector.push_back(newStudent);

  for(unsigned int i = 0; i < newVector.size(); i++){
    newVector.at(i)->Print();
  }

  return 0;
}
