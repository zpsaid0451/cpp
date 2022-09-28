/*Title: stubs.cpp
Author: CMSC 202
Date: 9/27/2022
Description: This is showing how to code stubs in c++.
We haven't written volume yet but we want to see if our code compiles.
We use this to help test our incremental coding.
*/
#include <iostream>
using namespace std;

int volume(int length, int width = 1, int height = 1);

int main () {
  int len1 = 10;
  int wid1 = 11;
  int hght1 = 12;
  cout << "The volume of len1 = " << volume(len1) << endl; //Calls function

  return 0;
}

int volume(int length, int width, int height){
  cout << "To code in the future" << endl; //Just a place holder so the code compiles
  return 1;
}

