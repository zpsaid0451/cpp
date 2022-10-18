//Title: sizeof examples
//Author: CMSC 202
//Date: 10/17/2022
//Desc: Examples showing the size of a variety of structures in bytes
#include <iostream>
using namespace std;

int main () {
  int x = 10; //Normal int
  int *ptrX = &x; //Int pointer
  int arr1[] = {10, 20, 30}; //Int array
  char c_str[] = "Candy"; //c-string (array of chars)
  cout << "sizeof(x)=" << sizeof(x) << endl; //Outputs size of x in bytes
  cout << "sizeof(ptrX)=" << sizeof(ptrX) << endl; //Outputs size of ptrX in bytes
  cout << "sizeof(arr1)=" << sizeof(arr1) << endl; //Outputs size of arr1 in bytes
  cout << "sizeof(c_str)=" << sizeof(c_str) << endl; //Outputs size of c_str in bytes
  cout << "c_str[5]=" << c_str[5] << endl; //Outputs blank (null terminator)

  return 0;
}
