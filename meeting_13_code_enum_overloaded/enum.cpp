/*Title: enum.cpp
Author: CMSC 202
Date: 10/17/2022
Description: This is introducing enums in c++.
*/

#include <iostream>
using namespace std;

enum designFlags {
  BOLD = 1, //Notice all base 2 in binary would be 00000001
  ITALICS = 2, //Notice all base 2 in binary would be 00000010
  UNDERLINE = 4 //Notice all base 2 in binary would be 00000100
};

int main() 
{
  int myDesign1 = BOLD; //Sets to 1    0000 0001
  int myDesign2 = ITALICS; //Sets to 2      0000 0010
  int myDesign3 = UNDERLINE; //Sets to 4        0000 0100
  int myDesign4 = BOLD | ITALICS; //Uses bitwise operators - Sets to 3      0000 0011
  int myDesign5 = BOLD | UNDERLINE; //Uses bitwise - Sets to 5              0000 0101
  int myDesign6 = ITALICS | UNDERLINE; //Uses bitwise - Sets to 6           
  int myDesign7 = BOLD | ITALICS | UNDERLINE; //Uses bitwise = Sets to 7    0000 0111
  
  //    00000001 BOLD = 1
  cout << myDesign1 << endl;
  cout << "Must be BOLD" << endl;

  //    00000010 ITALICS = 2
  cout << myDesign2 << endl;
  cout << "Must be ITALICS" << endl;

  //    00000100 UNDERLINE = 4
  cout << myDesign3 << endl;
  cout << "Must be UNDERLINE" << endl;

  //    00000001 BOLD = 1
  //  | 00000010 ITALICS = 2
  //  ___________
  //    00000011 = 3
  cout << myDesign4 << endl;
  cout << "Must be BOLD | ITALICS" << endl;

  //    00000001 BOLD = 1
  //  | 00000100 UNDERLINE = 4
  //  ___________
  //    00000101 = 5
  cout << myDesign5 << endl;
  cout << "Must be BOLD | UNDERLINE" << endl;

  //    00000010 ITALICS = 2
  //  | 00000100 UNDERLINE = 4
  //  ___________
  //    00000110 = 6
  cout << myDesign6 << endl;
  cout << "Must be ITALICS | UNDERLINE" << endl;

  //    00000001 BOLD = 1
  //  | 00000010 ITALICS = 2
  //  | 00000100 UNDERLINE = 4
  //  ___________
  //    00000111 = 7
  cout << myDesign7 << endl;
  cout << "Must be BOLD | ITALICS | UNDERLINE" << endl;

  return 0;
}
