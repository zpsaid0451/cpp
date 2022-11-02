#include "Person.cpp" //Includes the parent class
#include "Student.cpp" //Includes the child class
#include "Class1.cpp" //Includes the "class" class

int main () {
  Student newStudent1; //Creates a new student
  // using something already exsit
  newStudent1.setFName("Samwise"); //Uses person's setter
  newStudent1.setLName("Gamgee"); //Uses person's setter
  cout << "Full Name: " << newStudent1.getFName() << " " << newStudent1.getLName() << endl;

  Student newStudent2; //Creates a new student (which inherits from person)
  newStudent2.setFName("Peregrin"); //Uses person's setter
  newStudent2.setLName("Took"); //Uses person's setter
  cout << "Full Name: " << newStudent2.getFName() << " " << newStudent2.getLName() << endl;
  newStudent2.setStuID(12345); //Uses child's setter
  cout << "Student ID: " << newStudent2.getStuID() << endl; //Uses child's getter

  // 
  Class1 newClass; //Creates a new class
  newClass.addStudent(newStudent1); //Adds two students to the class (to the vector)
  newClass.addStudent(newStudent2); //Adds two students to the class (to the vector)
  newClass.printClass(); //Calls the printClass function of the class1 object
  return 0;
}

