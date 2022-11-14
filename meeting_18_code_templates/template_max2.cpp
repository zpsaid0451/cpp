/*Title: template_max.cpp
Author: CMSC 202
Date: 10/28/2022
Description: This is an example of using templates in C++.
*/
#include <iostream>
#include <string>

using namespace std;

template <typename T>   //Templated function
T const& Max (T const& a, T const& b)  { //Notice we use "T" instead of the data type
  return a < b ? b:a;
}

class Shoe{
public:
  Shoe(int size, string name){
    m_size = size;
    m_name = name;
  }
  friend bool operator<(const Shoe& l, const Shoe& r) {
    return l.m_size < r.m_size;
  }
  friend ostream& operator<<(ostream& out, const Shoe& f) {
    return out << "Brand: " << f.m_name << " Size: " << f.m_size;
  }
private:
  int m_size;
  string m_name;
};

int main () {

  int i = 39;
  int j = 20;
  cout << "Max(i, j): " << Max(i, j) << endl; //Makes an integer version of the function

  double f1 = 13.5;
  double f2 = 20.7;
  cout << "Max(f1, f2): " << Max(f1, f2) << endl;  //Makes a double version of the function

  string s1 = "Hello";
  string s2 = "World";
  cout << "Max(s1, s2): " << Max(s1, s2) << endl; //Makes a string version of the function

  Shoe sh1(10, "Nike");
  Shoe sh2(11, "Converse");
  //  Max(sh1,sh2);
  cout << "Max(sh1,sh2): " << Max(sh1,sh2) << endl;

  return 0;
}