#include "Person.cpp" //Includes the parent class
#include "Student.cpp" //Includes the child class

int main () {
  Person newPerson; //Creates a new person
  newPerson.setFName("Samwise"); //Uses person's setter
  newPerson.setLName("Gamgee"); //Uses person's setter
  cout << "Full Name: " << newPerson.getFName() << " " << newPerson.getLName() << endl;
  Student newStudent; //Creates a new student (which inherits from person)
  newStudent.setFName("Peregrin"); //Uses person's setter
  newStudent.setLName("Took"); //Uses person's setter
  cout << "Full Name: " << newStudent.getFName() << " " << newStudent.getLName() << endl;
  newStudent.setStuID(12345); //Uses child's setter
  cout << "Student ID: " << newStudent.getStuID() << endl; //Uses child's getter
  return 0;
}
