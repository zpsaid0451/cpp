/*Title: Using Enums with Bitwise Operations
Author: CMSC 202
Date: 10/17/2022
Desc: This is an example using enums to show bitwise operations - Will not be on test!
*/

#include <iostream>
#include <bitset>
using namespace std;

enum design{BOLD=1,ITALICS=2,UNDERLINE=4};

int main () {

  //Displaying an integer in binary (32 bits)
  bitset<32> b(2435256878);
  cout << "2435256878 = " << b << endl;

  //Displaying a negative integer in binary (32 bits)
  //Showing two's complement (inverse of positive number plus one)
  bitset<32> c(-2435256878);
  cout << "-2435256878 = " << c << endl;
  
  //Displaying an enum (integer constant of 1) in binary (8 bits)
  bitset<8> x(BOLD);
  cout << "BOLD = " << x << endl;

  //Displaying an enum (integer constant of 2) in binary (8 bits)
  bitset<8> y(ITALICS);
  cout << "ITALICS = " << y << endl;

  //Displaying an enum (integer constant of 4) in binary (8 bits)
  bitset<8> z(UNDERLINE);
  cout << "UNDERLINE = " << z << endl;

  //Displaying an enum (integer constants) in binary using bitwise OR (8 bits)
  bitset<8> a(BOLD|ITALICS|UNDERLINE);
  cout << "BOLD|ITALICS|UNDERLINE = " << a << endl;

  return 0;
}
