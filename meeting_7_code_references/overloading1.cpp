/*Title: overloading.cpp
Author: CMSC 202
Date: 9/20/2022
Description: This is showing function overloading in c++.
*/
#include <iostream>
using namespace std;

//Function signatures do NOT include return type!

int average(int a, int b); //This signature would be average(int, int)

double average(double a, double b); //This signature would be average(double, double)

int main () {
  int a = 11;
  int b = 12;
  cout << "The average of a and b is " << average(a,b) << endl; //This calls int, int
  double c = 15.5;
  double d = 16.6;
  cout << "The average of c and d is " << average(c,d) << endl; //This calls dbl, dbl
  float e = 11.3;
  float f = 12.3;
  cout << "The average of e and f is " << average(e,f) << endl; //This calls dbl, dbl
  return 0;
}

int average(int a, int b){ //This signature would be average(int, int)
  return ((a+b)/2);
}

double average(double a, double b){ //This signature would be average(double, double)
  return ((a+b)/2);
}
