/*Title: class1.cpp
Author: CMSC 202
Date: 9/27/2022
Description: This is introducing classes in c++.
*/
#include <iostream>
using namespace std;

// Represents a Day of the Year
class DayOfYear {
public:
  void Output();
  int m_month; //Should these be public?
  int m_day; //Should these be public?
};

// Code from main()
int main () {
  DayOfYear july4th;
  july4th.m_month = 7;
  july4th.m_day = 4;
  july4th.Output();
  return 0;
}

// Output method – displays a DayOfYear
void DayOfYear::Output() {
  cout << m_month << "/" << m_day << endl;
}