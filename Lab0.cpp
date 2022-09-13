/*
    Name:Lab 1
    Author: Ping Zhang
    Date:9/10/22
    Dec: This program asks the user for their cat’s name and the cat’s age (as an integer). 
    The user can then do one of three things: pet the cat, feed the cat, or chase the cat.
*/

#include<iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
  char catName[80];
  int catAge;
  int choices;
  int time = 0;
  cout << "What is your cat's name?\n"; 
  cin.getline(catName, 80); 
  cout << "How old is your cat? \n";
  cin >> catAge;
   while(cin.fail() or catAge< 0 or catAge > 22){
      cout << "Please enter your cat's age, it should be an integer between 0 and 22\n";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> catAge;
    }

  cout << "Cat Name = " << catName << endl;
  cout << "Cat's age = " << catAge << endl;
  
  while (time < 3 ){
    cout << "\nWhat would you like to do?\n1. Pet Kitty \n2. Feed Kitty\n3. Chase Kitty\n";
    cout << "Enter your choice:\n";
    cin >> choices;

    while(cin.fail() or choices < 1 or choices > 3 ){
      cout << "Enter your choice (1-3):\n";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> choices;
    }

      if (choices == 1){
            cout << "You pet Kitty and they purr.";
        } else if (choices == 2){
            cout << "Kitty meows gently as you feed them.";
        } else if (choices == 3) {
            cout << "You chase after Kitty and they hiss and try to bite.";
        } else {
            cout << "Enter your choice (1-3):";
            cin >> choices;
        }
        time = time+1;
  }

  cout << "\nThat is enough for today. Good-bye";

  return 0;
}