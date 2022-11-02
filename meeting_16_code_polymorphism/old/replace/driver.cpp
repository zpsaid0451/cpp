#include "Person.cpp" //Includes the parent class
#include "Student.cpp" //Includes the child class

int main () {
  Person newPerson; //Creates a new person
  newPerson.setFName("Samwise"); //Uses person's setter
  newPerson.setLName("Gamgee"); //Uses person's setter
  cout << "Samwise is a person ONLY, we cannot call student functions for him" << endl;
  newPerson.printFullName(); //This should call the parent version of the function
  
  Student newStudent; //Creates a new student (which inherits from person)
  newStudent.setFName("Peregrin"); //Uses person's setter
  newStudent.setLName("Took"); //Uses person's setter
  cout << "Peregrin is a student, we call either person functions or student functions" << endl;
  newStudent.printFullName(); //This should call the child version of the function
  newStudent.Person::printFullName(); //This should call the parent version of the function
  newStudent.setStuID(12345); //Uses child's setter
  cout << "Student ID: " << newStudent.getStuID() << endl; //Uses child's getter
  return 0;
}
