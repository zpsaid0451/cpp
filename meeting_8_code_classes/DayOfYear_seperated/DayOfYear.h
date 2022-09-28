/*Title: DayOfYear.h
Author: CMSC 202
Date: 9/27/2022
Description: This is practicing breaking files up in c++.
DayOfYear.h (class header file)
DayOfYear.cpp (class definition file)
driver.cpp (main that uses class DayOfYear)
makefile (used to compile entire program)
*/
#ifndef DAY_OF_YEAR_H
#define DAY_OF_YEAR_H

#include <iostream>
using namespace std;

// Represents a Day of the Year
class DayOfYear
{
public:
  void Output();
  int m_month;
  int m_day;
};
#endif
