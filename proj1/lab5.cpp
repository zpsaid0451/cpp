#include <iostream>
#include <fstream> //Required to open/close and read a file
#include <string> //Required to use a string
using namespace std;

// string valideInput(ifstream, ifstream);
int findIndex(string hashTag);
void displayHashtag();

 string hashtagFile;
    string parseFile;
    ifstream myHashtagFile;
    ifstream myParseFile;
    string hashtag;
    string parse;
    string hashTag;
    string countMessage;
    string answer;
    int hashtagSize = 0;
    int parseSize =0;
    int index;
    const int NUM_HASHTAG = 20;
    string hashtagData[NUM_HASHTAG];
    string messageData[NUM_HASHTAG];
    int countHashtagArr[NUM_HASHTAG];


int main(){
  double temperature = 0.0; //Input for converting
  int choice = 0; //Menu choice

  cout<<"Welcome to Temperature Conversion tool " <<endl << endl;

  do {
    cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
    cout << "Please enter the file with the hashtags you would like to use:" << endl; 
	cin >> hashtagFile; //console input
    cout << "Please enter the file with the messages you would like to parse:" << endl; 
	cin >> parseFile; //console input
    myHashtagFile.open(hashtagFile);
    myParseFile.open(parseFile);

    //check for validation

    if (myHashtagFile.is_open()){
       cout << "Your file was imported!\n" << endl; 
    }else {
        cout << "This file does not exist.\n" << endl; 
        cout << "No message loaded\n" << endl; 
    }

    if (myParseFile.is_open()){
        cout << "Your file was imported!\n" << endl; 
    }else {
        cout << "This file does not exist.\n" << endl; 
        cout << "No hashtags loaded\n" << endl; 
    }
    if (!(myHashtagFile.is_open() && myParseFile.is_open())) {
        while (!(myHashtagFile.is_open() && myParseFile.is_open())) {
        cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
        cout << "Please enter the file with the hashtags you would like to use:" << endl; 
        cin >> hashtagFile; //console input
        cout << "Please enter the file with the messages you would like to parse:" << endl; 
        cin >> parseFile; //console input
        }
    }

     cout << endl;

  }while(myHashtagFile.fail() || myParseFile.fail());

  cout << "Have a good one!" << endl;

  return 0;
}

//Write function toCelsius here
//Convert from F to C using pass by reference
