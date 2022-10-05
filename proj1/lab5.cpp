/*****************************************
** File:    Proj1.cpp
** Project: CMSC 202 Project 1, Fall 2022
** Author:  Ping Zhang
** Date:    9/22/22
** E-mail:  pingz1@umbc.edu
**
** This file contains the main driver program for Project 1.
** This program reads the file specified as the first command
** line argument, counts the number of words, spaces, and
** characters, and displays the results in the format specified 
** in the project description.
**
**
***********************************************/


#include <iostream>
#include <iomanip>
#include <fstream> //Required to open/close and read a file
#include <string> //Required to use a string
using namespace std;

//Constants 
const int NUM_HASHTAG = 20;
const int HASHTAG_NOT_FOUND = 21;

//Function Prototypes 
int findIndex(string hashtag, string hashtagData[]);
void loadFiles();
void displayHashtag(string hashtagData[],int countHashtagArr[],int hashtagSize);
void storeNumHashtagArr(int countHashtagArr[]);
void displayHashtag(string hashtagData[],int countHashtagArr[],int hashtagSize);
void displayMatchMessages(int parseSize,string messageData[]);
    

int main(){
    string answer;
    // the do while loop will continute ask user if they want to analyze another file until the answer is y or yes.
    do{
      loadFiles();
       cout << "Would you like to analyze another file?" << endl;
        cin  >> answer;
        if (answer == "n" || answer == "no" ){
            cout << "Thank you for using the hashtag analyzer!";
        }

    }while(answer == "y"|| answer == "yes");
  return 0;
}

// check for each file to see if it is able to load both files.
// store all hashtag in hashtagData array, and store all message in messageData array.
void loadFiles(){
    string hashtagData[NUM_HASHTAG];
    string messageData[NUM_HASHTAG];
    int countHashtagArr[NUM_HASHTAG];
    string hashtagFile;
    string parseFile;
    ifstream myHashtagFile;
    ifstream myParseFile;
    string hashtag;
    string parse;
    string hashTag;
    string countMessage;
    int hashtagSize = 0;
    int parseSize =0;
    int countMatch =0;
    string hashTagInMsg; 
    bool errorHashTag;
    bool errorParse;
    // the do while loop will continute until both files do not have error and able to load.
    do {
        //reset file stream
        myHashtagFile.close();
        myParseFile.close();
        myHashtagFile.clear();
        myParseFile.clear();        

        errorHashTag = false;
        errorParse = false;
        cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
        cout << "Please enter the file with the hashtags you would like to use:" << endl; 
        cin >> hashtagFile; 
        cout << "Please enter the file with the messages you would like to parse:" << endl; 
        cin >> parseFile; 
        myHashtagFile.open(hashtagFile);
        myParseFile.open(parseFile);

        //check for validation
        //if myfashtagFile able to open, or not
        if (myHashtagFile.is_open()){
            cout << "Your file was imported!" << endl; 
        }else {
            cout << "This file does not exist." << endl; 
            cout << "No hashtag loaded" << endl; 
            errorHashTag = true;
        }
        //if myparseFile able to open, or not
        if (myParseFile.is_open()){
            cout << "Your file was imported!" << endl; 
        }else {
            cout << "This file does not exist." << endl; 
            cout << "No message loaded" << endl; 
            errorParse = true;
        }
    }while(errorHashTag || errorParse);

    // loop the hashtag file and get each line message as hashtag
    while (getline(myHashtagFile, hashtag)){
        //Store all the hashtags into hashtagData array
        hashtagData[hashtagSize] = hashtag;
        hashtagSize++;
    }
    cout << hashtagSize << " hashtags loaded." << endl;

    storeNumHashtagArr(countHashtagArr);
    // loop myParseFile and get all the hashtagInmsg and parse line by line.
    while (getline(myParseFile, hashTagInMsg)){
        getline(myParseFile, parse);
        parseSize++;
        int index = findIndex(hashTagInMsg,hashtagData);
        // Check if hashtag found.
        if (index < HASHTAG_NOT_FOUND){
            countHashtagArr[index] +=1;
            countMatch +=1;
            // Store all the messages into messageData array
            string message = to_string(countMatch) + ". " + hashTagInMsg  + " " + parse;
            messageData[countMatch-1] = message;
        }
    }
    cout << parseSize << " message loaded." << endl; 
    cout << "Messages with matching hashtags" << endl;
    displayMatchMessages(countMatch,messageData);
    displayHashtag(hashtagData,countHashtagArr,hashtagSize);
}

// create NumHashtagArr array with all 0.
void storeNumHashtagArr(int countHashtagArr[]){
    for (int i = 0; i < NUM_HASHTAG; ++i){
        countHashtagArr[i] = 0;    
    }

}

//display all the message in the messageData array
void displayMatchMessages(int countMatch,string messageData[]){
    for (int i = 0; i < countMatch; ++i){ //loops for each hashtag
        cout <<  messageData[i] << endl;
    }
}

//loop hashtagData array and when  it is match,
//return the index number of the hashtagdata(hashtag array) 
int findIndex(string hashtag, string hashtagData[]){
    for (int i = 0; i < NUM_HASHTAG; ++i){
        if (hashtagData[i] == hashtag){
            return i;
        }
    } //loops for each NUM_NUMBERS
    return 21;
}

// display the table include all the hashtags and how many numbers of them match to message files.
void displayHashtag(string hashtagData[],int countHashtagArr[],int hashtagSize){
    for (int i = 0; i < hashtagSize; ++i){ //loops for each hashtag
        //format the table
        cout << setw(5) << right << i+1 <<  setw(25) << right << hashtagData[i] << setw(5) << right << countHashtagArr[i] << " \n"; 
    }
}

