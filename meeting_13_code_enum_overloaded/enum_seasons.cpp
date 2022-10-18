/*Title: enum2.cpp
Author: CMSC 202
Date: 10/17/2022
Description: This is introducing enums in c++.
*/

#include <iostream>
using namespace std;

/*This is an enum called seasons. It is virtually the same as declaring:
const int WINTER = 0;
const int SPRING = 1;
const int SUMMER = 2;
const int FALL = 3;
The trailing mySeason, creates a new enum variable that can only have the values
of the enum(WINTER, SPRING, SUMMER, FALL)
*/

enum Seasons{WINTER, SPRING, SUMMER, FALL} mySeason;

int main () {
  int choice = 0;
  do{
    cout << "Which season is it?" << endl;
    cout << "1. Winter" << endl;
    cout << "2. Spring" << endl;
    cout << "3. Summer" << endl;
    cout << "4. Fall" << endl;
    cin >> choice;
  }while(choice < 1 || choice > 4);
  mySeason = Seasons(choice-1); //Casting the integer to a specific instance of a season
  switch (mySeason){
  case WINTER: //You could use Winter OR 0 here
    cout << "Brr! It is cold!" << endl;
    break;
  case SPRING: //You could use Spring or 1 here
    cout << "It is getting warmer." << endl;
    break;
  case 2: //You could use 2 or Summer here
    cout << "It is just hot outside." << endl;
    break;
  case 3: //You could use 3 or Fall here
    cout << "The leaves have fallen off of the trees." << endl;
    break;
  }  
    return 0;
}
