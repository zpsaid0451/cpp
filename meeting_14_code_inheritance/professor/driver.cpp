#include "Person.cpp"
#include "Student.cpp"
#include "Professor.cpp"

int main (){
  Person newPerson;
  newPerson.setFName("Samwise");
  newPerson.setLName("Gamgee");
  cout << "Full Name: " << newPerson.getFName() << " " << newPerson.getLName() << endl;
  Student newStudent;
  newStudent.setFName("Peregrin");
  newStudent.setLName("Took");
  cout << "Full Name: " << newStudent.getFName() << " "
       << newStudent.getLName() << endl;
  newStudent.setSchool("Mordor");
  Professor newProfessor;
  newProfessor.setFName("Albus");
  newProfessor.setLName("Dumbledore");
  
  
  return 0;
}
