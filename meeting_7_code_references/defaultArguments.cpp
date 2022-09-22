/*Title: defaultArguments.cpp
Author: CMSC 202
Date: 9/20/2022
Description: This is showing default arguments in c++.
*/
#include <iostream>
using namespace std;

int volume(int length, int width = 1, int height = 1);//Notice only the prototype
                                                      // has the default values

int main () {
  int len1 = 10;
  int wid1 = 11;
  int hght1 = 12;
  cout << "The volume of len1 = " << volume(len1) << endl; //Uses default for w+h
  cout << "The volume of len1 and wid1 = " << volume(len1, wid1) << endl; 
                                      //Uses default for height only
  cout << "The volume of len1, wid1, and hght1 = " << volume(len1, wid1, hght1) << endl; //Uses all actual values - no default values uses.
  return 0;
}

int volume(int length, int width, int height){ //No default values in definition
  return(length*width*height);
}
