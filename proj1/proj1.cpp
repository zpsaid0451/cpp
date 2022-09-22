/*Title: project1.cpp
Author: CMSC202
Date: 9/22/2022
Description: This is project one
*/

#include <iostream>
#include <fstream> //Required to open/close and read a file
#include <string> //Required to use a string
using namespace std;

int main () {
    // string fName; //Declaration of a string
    // string lName; //Declaration of a string
    // int age;
    string hashtagFile;
    string parseFile;

    // ifstream myfile ("example.txt"); //Declares and opens a file
    cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
    cout << "Please enter the file with the hashtags you would like to use:" << endl; 
	cin >> hashtagFile; //console input
    cout << "Please enter the file with the messages you would like to parse:" << endl; 
	cin >> parseFile; //console input
    ifstream myHashtagFile (hashtagFile); 
    ifstream myParseFile (parseFile); 
    if (myHashtagFile.is_open()) {
        cout << "Your file was imported!\n" << endl;
        
         //Checks to see if the file exists and was opened
    //   while(myfile >> fName){ //Keeps reading a name as long as there is another line
    //     myfile >> lName >> age; //Reads the rest of the line
    //     cout << "Your name is: " << fName << " " << lName << endl; //Outputs the first and last names
    //     cout << "You are: " << age << " years old." << endl; //Outputs the age
    //   }
    
    }else {
      cout << "Unable to open file"; //If the input file does not exist, notifies user
    }
      myHashtagFile.close(); //Closes the file
  return 0;
}

