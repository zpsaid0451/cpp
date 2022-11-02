#include <iostream>
#include <vector>
using namespace std;

class Polygon{
public:
  void SetValues(int a, int b){
    m_width = a;
    m_height = b;
  }
  // type independent, use virtual keyword. just potptype, not .cpp (need deleted virtual)
  virtual int Area(){
    cout << "POLYGON:";
    return 0;
  }
protected:
  int m_width;
  int m_height;
};

class Rectangle: public Polygon{
public:
  int Area(){
    cout << "RECTANGLE:";
    return m_width * m_height;
  }
};

class Triangle: public Polygon{
public:
  int Area(){
    cout << "TRIANGLE:";
    return (m_width*m_height)/2;
  }
};


int main(){
  Polygon *poly1;
  Polygon *poly2;
  poly1 = new Rectangle();
  poly2 = new Triangle();

  Polygon *poly3 = new Rectangle();
  Triangle tri;
  Polygon *poly4 = &tri;

  poly1->SetValues(4,5);
  poly2->SetValues(4,5);
  poly3->SetValues(4,5);
  poly4->SetValues(4,5);

  vector<Polygon*> polygons;
  polygons.push_back(poly1);
  polygons.push_back(poly2);
  polygons.push_back(poly3);
  polygons.push_back(poly4);



  for(unsigned int i = 0; i < polygons.size(); i++){
    cout << polygons.at(i)->Area() << endl;
  }

  // deleted the content of vector
  //valgrind ./poly1.cpp
   for(unsigned int i = 0; i < polygons.size(); i++){
    delete polygons.at(i);
  }
   // clean 3 , size resize to 0 (vector).
   // reset everything
  polygons.clear();
 
  return 0;
}

// output

  
