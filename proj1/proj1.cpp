/*Title: project1.cpp
Author: CMSC202
Date: 9/22/2022
Description: This is project one
*/

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
int main () {
    // string fName; //Declaration of a string
    // string lName; //Declaration of a string
    // int age;
   
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
    // myHashtagFile.open(hashtagFile);
    // myParseFile.open(parseFile);
    myHashtagFile.open(hashtagFile);
    myParseFile.open(parseFile);
    // valideInput(myHashtagFile,myParseFile);
 
    if (myHashtagFile.is_open()) {
        cout << "Your file was imported!\n" << endl;
    //      cout << "This file does not exist.\n";
    //     cout << "Welcome to the Hashtag Analyzer \nYou will choose a file of hashtags to search for \nThen you will choose a file to search for the hashtags" << endl;
    // cout << "Please enter the file with the hashtags you would like to use:" << endl; 
	// cin >> hashtagFile; //console input
    // cout << "Please enter the file with the messages you would like to parse:" << endl; 
	// cin >> parseFile; //console input
    while (getline(myHashtagFile, hashtag)){
        hashtagData[hashtagSize] = hashtag;

        hashtagSize++;
        
                // cout << hashtagSize << "\t"<< hashtag << endl;  
    }
    cout << hashtagSize << " hashtags loaded." << endl;
   
    };
   
    // countHashTag(countHashtagArr, NUM_HASHTAG);

    for (int i = 0; i < NUM_HASHTAG; ++i) //loops for each NUM_NUMBERS
        {
           countHashtagArr[i] = 0;
            // 
        
        }
    for (int i = 0; i < hashtagSize; ++i) //loops for each NUM_NUMBERS
    {
    cout << countHashtagArr[i] << " ";
    // 

    }

    string hashtagArray[hashtagSize];
    int count[hashtagSize];
 
     if (myParseFile.is_open()) {
        cout << "Your file was imported!\n" << endl;
        cout << "Messages with matching hashtags\n";
    while (getline(myParseFile, hashTag)){
        getline(myParseFile, parse);
        
        // for (int i = 0; i < 5; i++) {

        // }
        // char firstParse = parse[0];
        // if (firstParse == '#'){
            parseSize++;
         
        // }
        
        // countMessage = to_string(parseSize)+ ". " + hashTag  + " " + parse + "\n";
        // cout << countMessage << endl;

        index = findIndex(hashTag);
        string message;
         int countMatch =0;
        if (index < 21){
           
            countHashtagArr[index] +=1;
            countMatch +=1;
            message = to_string(countMatch) + ". " + hashTag  + " " + parse + "\n";
            cout << message << " \n";
            
        }
        //   for (int i = 0; i < countMatch; ++i){ //loops for each hashtag

        //     cout << messageData[i] << " \n";
        //     }

        // addHashtag(index);
        
  
    }
    displayHashtag();
    cout << parseSize << " message loaded." << endl;
    //  for (int i = 0; i < hashtagSize; ++i) //loops for each NUM_NUMBERS
    // {
    // cout << countHashtagArr[i] << " ";
    // // 

    // }
    }else {
      cout << "This file does not exist."; //If the input file does not exist, notifies user
    }
      myHashtagFile.close(); //Closes the file

    cout << "Would you like to analyze another file?" << endl;
    cin  >> answer;
    if (answer == "n" || answer == "no" ){
        cout << "Thank you for using the hashtag analyzer!";
    }

  return 0;
}

// string valideInput(ifstream myHashtagFile, ifstream myParseFile) {
//      string hashtagFile;
//    while (!myHashtagFile.is_open() or !myParseFile.is_open()) {
//         cout << "This file does not exist.\n";
//         cout << "Please enter the file with the hashtags you would like to use:" << endl; 
//         cin >> hashtagFile; //console input
//         cout << "Please enter the file with the messages you would like to parse:" << endl; 
//         //cin >> parseFile; //console input


//         myHashtagFile.open(hashtagFile);
//     }
//     return "";
// }

int findIndex(string hashtag){
    for (int i = 0; i < NUM_HASHTAG; ++i){
        if (hashtagData[i] == hashtag){
            return i;
        }
    } //loops for each NUM_NUMBERS
    return 21;
}

// addHashtag(int index){
//     for (int i = 0; i < NUM_HASHTAG; ++i){
//         countHashtagArr[index] +=1
//             return i;
//         } 
// }

void displayHashtag(){
     for (int i = 0; i < hashtagSize; ++i){ //loops for each hashtag
    cout << i+1 << "\t" << hashtagData[i] << "\t\t" << countHashtagArr[i] << " \n";
    }

}