//#include "Person.cpp"
//#include "Student.cpp"
#include "Class1.cpp"

int main () {
  Student newStudent1;
  newStudent1.setFName("Samwise");
  newStudent1.setLName("Gamgee");

  Student newStudent2;
  newStudent2.setFName("Peregrin");
  newStudent2.setLName("Took");

  Person newPerson;
  newPerson.setFName("Gandolf");
  newPerson.setLName("the Grey");

  Class1 newFellowship;
  newFellowship.addStudent(newStudent1);
  newFellowship.addStudent(newStudent2);
  newFellowship.printClass();

  return 0;
}
