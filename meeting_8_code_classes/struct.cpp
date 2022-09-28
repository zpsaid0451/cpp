/*Title: struct.cpp
Author: CMSC 202
Date: 9/27/2022
Description: This is practicing an array of structures in c++.
*/
#include <iostream>
#include <string>
using namespace std;

const int NUM_MOVIES = 3;

struct movies_t {
  string m_title;
  int m_year;
} films [NUM_MOVIES]; //Builds a struct then builds an array of movie structs called films
// Movie films [NUM_MOVIES];


//Prototype for a printMovie function
void printMovie (movies_t movie);

int main () {
  for (int n = 0; n < NUM_MOVIES; n++) { //Allows the user to enter 3 movies
    cout << "Enter title: ";
    getline(cin, films[n].m_title); //Reads in a movie title and stores in struct in array
    cout << "Enter year: ";
    cin >> films[n].m_year; //Reads in a year and stores in struct in array
    if(cin.peek() == '\n') //Checks for any extra \n
      cin.ignore(10, '\n' );  //Drops extra \n as needed
  }

  cout << "\nYou have entered these movies:\n";
  for (int n = 0; n < NUM_MOVIES; n++) //Iterates through array and calls printMovie
    printMovie (films[n]); //passes whole movie struct to function
  return 0;
}

void printMovie (movies_t movie)
{
  cout << movie.m_title; //Uses dot operator to print title
  cout << " (" << movie.m_year << ")" << endl; //Uses dot operator to print year
}
