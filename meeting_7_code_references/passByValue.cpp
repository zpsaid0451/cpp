/*Title: passByValue
Author: CMSC 202
Date: 9/20/2022
Description: This is showing pass-by-value in c++.
In this example, "a" is a copy of myInt.
*/
#include <iostream>
using namespace std;

int addOne(int a){
  cout << "During addOne call myInt = " << a << endl;
  return (++a); //What happens if we use a++ instead of ++a?
}

int main () {
  int myInt = 10;
  cout << "Before calling addOne myInt = " << myInt << endl;
  addOne(myInt); //Notice not storing result
  cout << "After calling addOne myInt = " << myInt << endl;
  myInt = addOne(myInt); //Notice storing result as myInt
  cout << "After returning results of function call as myInt = " << myInt << endl;
  return 0;
}
