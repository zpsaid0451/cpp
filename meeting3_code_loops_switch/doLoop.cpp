/*Title: Do While Loops
Author: CMSC 202
Date: 9/7/2022
Description: This is practicing do...while loops in c++.
*/

#include <iostream>
#include <fstream> //Required to open/close and read a file
#include <string> //Required to use a string
using namespace std;


 string hashtagFile;
    string parseFile;
    ifstream myHashtagFile;
    ifstream myParseFile;
    string hashtag;
    string parse;
    string hashTag;
    int hashtagSize = 0;
    int parseSize =0;
    const int NUM_HASHTAG = 20;
    string hashtagData[NUM_HASHTAG];
    string messageData[NUM_HASHTAG];
    int countHashtag[NUM_HASHTAG];
// int main () {
//   int choice = 0; //Used for user input
//   do{
//     cout << "1. Attack Monster" << endl;
//     cout << "2. Hug Puppy" << endl;
//     cout << "3. Earn A" << endl;
//     cin >> choice;
// 	(choice < 1 || choice > 3)?cout << "Must be between 1 and 3" << endl:cout << "Thank you" << endl; //Ternary Operator
//   }while(choice < 1 || choice > 3); //checks to see if between 1 and 3
//   cout << "You chose " << choice << endl;
//   return 0;
// }



int main () {
  int choice = 0; //Used for user input
  do{
   cout << "Please enter the file with the hashtags you would like to use:" << endl; 
	  cin >> hashtagFile; //console input
    cout << "Please enter the file with the messages you would like to parse:" << endl; 
	  cin >> parseFile; //console input
    myHashtagFile.open(hashtagFile);
    myParseFile.open(parseFile);
	(!myHashtagFile.is_open() || !myParseFile.is_open())?cout << "Must be between 1 and 3" << endl:cout << "Thank you" << endl; //Ternary Operator
  }while(choice < 1 || choice > 3); //checks to see if between 1 and 3
  cout << "You chose " << choice << endl;
  return 0;
}



// int main () {

//   bool error = false;
//   do{
//     cout << "Please enter the file with the hashtags you would like to use:" << endl; 
// 	  cin >> hashtagFile; //console input
//     cout << "Please enter the file with the messages you would like to parse:" << endl; 
// 	  cin >> parseFile; //console input
//     myHashtagFile.open(hashtagFile);
//     myParseFile.open(parseFile);
// 	// if (!myHashtagFile.is_open() || !myParseFile.is_open()){


//   //   error = true

//   //   error = false

//   //    cout << "Please enter the file with the hashtags you would like to use:" << endl; 
// 	//   cin >> hashtagFile; //console input
//   //   cout << "Please enter the file with the messages you would like to parse:" << endl; 
// 	// cin >> parseFile; //console input
//   //   }
//   //   else{
//   //     cout << "Your file was imported!\n" << endl;
//   //     cout << "Your file was imported!\n" << endl;
//   if(myHashtagFile.is_open()){
//         cout << "Your file was imported!\n" << endl;
//         while (getline(myHashtagFile, hashtag)){
//                     hashtagSize++;
//                     cout << hashtagSize << "\t"<< hashtag << endl;  
//                 }
//       cout << hashtagSize << " hashtags loaded." << endl;
//       error = false;
//    }

//     string hashtagArray[hashtagSize];
//     int count[hashtagSize];
 
//   if (myParseFile.is_open()) {
//     cout << "Your file was imported!\n" << endl;
//     while (getline(myParseFile, hashTag)){ 
//         getline(myParseFile, parse);
//           parseSize++;

//         cout << "Messages with matching hashtags\n";
//         cout << parseSize << " . " << hashTag  << " " << parse << endl;
//         cout << parseSize << " message loaded." << endl;
//         error = false;
//     }
//   }
//     }while(error); //checks to see if between 1 and 3
//     cout << "Please enter the file with the hashtags you would like to use:" << endl; 
// 	  cin >> hashtagFile; //console input
//     cout << "Please enter the file with the messages you would like to parse:" << endl; 
// 	  cin >> parseFile; //console input

//   return 0;
// }
