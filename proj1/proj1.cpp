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
    ifstream myHashtagFile;
    ifstream myParseFile;
    string hashtag;
    string parse;
    string hashTag;
    int hashtagSize = 0;
    int parseSize =0;

    // ifstream myfile ("example.txt"); //Declares and opens a file
    cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
    cout << "Please enter the file with the hashtags you would like to use:" << endl; 
	cin >> hashtagFile; //console input
    cout << "Please enter the file with the messages you would like to parse:" << endl; 
	cin >> parseFile; //console input
    // ifstream myHashtagFile (hashtagFile); 
    // ifstream myParseFile (parseFile); 

    // handleHashtagFile (myHashtagFile);
    // handleParseFile(myParseFile);
    myHashtagFile.open(hashtagFile);
    myParseFile.open(parseFile);
    while (!myHashtagFile.is_open()) {
         cout << "This file does not exist.\n";
        cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
    cout << "Please enter the file with the hashtags you would like to use:" << endl; 
	cin >> hashtagFile; //console input
    cout << "Please enter the file with the messages you would like to parse:" << endl; 
	cin >> parseFile; //console input

    };
      cout << "Your file was imported!\n" << endl;

    
        while (getline(myHashtagFile, hashtag)){
            hashtagSize++;
            cout << hashtagSize << "\t"<< hashtag << endl;  
        }
        cout << hashtagSize << " hashtags loaded." << endl;
    

    string hashtagArray[hashtagSize];
    int count[hashtagSize];
 
     if (myParseFile.is_open()) {
        cout << "Your file was imported!\n" << endl;
    while (getline(myParseFile, hashTag)){
        
        
        getline(myParseFile, parse);
        
        // for (int i = 0; i < 5; i++) {

        // }
        // char firstParse = parse[0];
        // if (firstParse == '#'){
            parseSize++;
         
        // }
        cout << "Messages with matching hashtags\n";
        cout << parseSize << " . " << hashTag  << " " << parse << endl;
        //  myParseFile >> parse;
//  myParseFile >> hashtag;
//     myParseFile >> parse;
//     cout << " Hashtag" << hashtag << endl;
//     cout << " message" << parse << endl;
    }
   
    cout << parseSize << " message loaded." << endl;
    }else {
      cout << "This file does not exist."; //If the input file does not exist, notifies user
    }
      myHashtagFile.close(); //Closes the file
  return 0;
}
