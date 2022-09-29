#include <iostream>
#include <fstream> //Required to open/close and read a file
#include <string> //Required to use a string
using namespace std;

// string valideInput(ifstream, ifstream);
int findIndex(string hashTag);
void displayHashtag();
void getHashtagSize ();
void storeNumHashtagArr();
void displayParse();
void displayHashtag();
void displayMatchMessages();

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

    bool errorHashTag;
    bool errorParse;
  do {
    errorHashTag = false;
    errorParse = false;
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
        errorHashTag = true;
    }

    if (myParseFile.is_open()){
        cout << "Your file was imported!\n" << endl; 
    }else {
        cout << "This file does not exist.\n" << endl; 
        cout << "No hashtags loaded\n" << endl; 
        errorParse = true;
    }

  }while(errorHashTag || errorParse);
    cout << "both opened" << endl;
    getHashtagSize ();
    storeNumHashtagArr();
    displayParse();
    displayHashtag();

  return 0;
}

void getHashtagSize (){
     while (getline(myHashtagFile, hashtag)){
        hashtagData[hashtagSize] = hashtag;
        hashtagSize++;
    }
    cout << hashtagSize << " hashtags loaded." << endl;
    };

void storeNumHashtagArr(){
    for (int i = 0; i < NUM_HASHTAG; ++i){
        countHashtagArr[i] = 0;    
    }

    // for (int i = 0; i < hashtagSize; ++i){ //loops for each NUM_NUMBERS
    //     cout << countHashtagArr[i] << " ";
    // // 
    // }
}

void displayParse() {
     int countMatch =0;
     string message;
        while (getline(myParseFile, hashTag)){
            getline(myParseFile, parse);
            parseSize++;

            int index = findIndex(hashTag);
        // string message;
            if (index < 21){
            
                countHashtagArr[index] +=1;
                countMatch +=1;
                // for (int i = 0; i < NUM_HASHTAG; ++i){
                //     messageData[i] = to_string(countMatch) + ". " + hashTag  + " " + parse + "\n";    
                // }
                
                message = to_string(countMatch) + ". " + hashTag  + " " + parse + "\n";
                messageData[countMatch-1] = message;
                // cout << message << " \n";
                
            }
        }
        cout << parseSize << " message loaded." << endl; 
        displayMatchMessages();
        
}

void displayMatchMessages(){
    for (int i = 0; i < parseSize; ++i){ //loops for each hashtag
    cout <<  messageData[i] << endl;
    }
}

int findIndex(string hashtag){
    for (int i = 0; i < NUM_HASHTAG; ++i){
        if (hashtagData[i] == hashtag){
            return i;
        }
    } //loops for each NUM_NUMBERS
    return 21;
}

void displayHashtag(){
    for (int i = 0; i < hashtagSize; ++i){ //loops for each hashtag
    cout << i+1 << "\t" << hashtagData[i] << "\t\t" << countHashtagArr[i] << " \n";
    }
}

