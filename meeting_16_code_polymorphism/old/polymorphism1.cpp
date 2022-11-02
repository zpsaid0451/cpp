/*Title: polymorphism1.cpp
Author: CMSC 202
Date: 10/21/2022
Description: This is introducing polymorphism in C++.
*/
#include <iostream>
using namespace std;

class Polygon { //Parent class
public:
  void set_values (int a, int b)
  { m_width=a; m_height=b; } //Mutator for the two sides
  virtual int area ()
  { return 0; } //Uses 0 for area
protected:
  int m_width, m_height; //Protected so the child classes have access
};

class Rectangle: public Polygon {
public:
  virtual int area ()
  { return m_width * m_height; } //Uses width * height for area
};

class Triangle: public Polygon {
public:
  virtual int area ()
  { return (m_width * m_height / 2); } //Uses width * height / 2 for area
};

int main () {
  Rectangle rect; //Create a new object
  Triangle trgl; //Create a new triangle object
  Polygon poly; //Create a new polygon object
  Polygon * ppoly1 = &rect; //Create a pointer (type polygon) that points to rectangle
  Polygon * ppoly2 = &trgl; //Create a pointer (type polygon) that points to triangle
  Polygon * ppoly3 = &poly; //Create a pointer (type polygon) that points to polygon
  ppoly1->set_values (4,5); //Set initial values
  ppoly2->set_values (4,5); //Set initial values
  ppoly3->set_values (4,5); //Set initial values
  cout << "rectangle area = " << ppoly1->area() << '\n'; //Area for the rectangle (L*W)
  cout << "triangle area = " << ppoly2->area() << '\n'; //Area for the triangle (L*W/2)
  cout << "polygon area = " << ppoly3->area() << '\n'; //Area for the polygon (0)
  return 0;
}
