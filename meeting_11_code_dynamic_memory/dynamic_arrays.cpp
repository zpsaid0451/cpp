/*Title: dynamic_arrays.cpp
Author: CMSC 202
Date: 10/5/2022
Description: This is introducing dynamic memory allocation in C++ using arrays.
*/
#include <iostream>
using namespace std;

int main ()
{
  int i,n;
  int * p; //Declare a pointer
  cout << "How many numbers would you like to type? ";
  cin >> i; //Stores how many numbers to input
  p = new int[i]; //Creates a new dynamically allocated array
  for (n=0; n<i; n++) {
    cout << "Enter number: ";
    cin >> p[n]; //Inserts number into array
  }
  cout << "You have entered: ";
  for (n=0; n<i; n++)
    cout << p[n] << ((n != (i-1))?",":""); //Iterates over array and outputs - also ternary!
  cout << endl;
  delete[] p; //Deallocates dynamically allocated array - without would be memory leak
  p = nullptr;
  cout << *p << endl;
  return 0;
}

//valgrind ./dynamic_arrays
//check error
//to check leak summary
//if see any leak bytes. remember to add delete (no leaks are possible)




