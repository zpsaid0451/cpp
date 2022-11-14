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

   return 0;
}