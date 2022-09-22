/*Title: passByReference
Author: CMSC 202
Date: 9/20/2022
Description: This is showing pass-by-reference in c++.
In this case, "a" is the memory address of myInt.
*/

#include <iostream>
using namespace std;

int addOne(int &a);

int main () {
  int myInt = 10;
  cout << "Before calling addOne myInt = " << myInt << endl;
  addOne(myInt); //Notice not storing result
  cout << "After calling addOne myInt = " << myInt << endl;
  myInt = addOne(myInt); //Notice storing result as myInt
  cout << "After returning results of function call as myInt = " << myInt << endl;
  return 0;
}

int addOne(int &a){
  cout << "During addOne call myInt = " << a << endl;
  return (++a); //What happens if we use a++ instead of ++a?
}


// #include <iostream>
// using namespace std;

// void addOne(int &a);

// int main () {
//   int myInt = 10;
//   cout << "Before calling addOne myInt = " << myInt << endl;
//   addOne(myInt); //Notice not storing result
//   cout << "After calling addOne myInt = " << myInt << endl;
//   myInt = addOne(myInt); //Notice storing result as myInt
//   cout << "After returning results of function call as myInt = " << myInt << endl;
//   return 0;
// }

// int addOne(int &a){
//   cout << "During addOne call myInt = " << a << endl;
//   ++a; //What happens if we use a++ instead of ++a?
// }