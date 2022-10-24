#include <iostream>
#include <fstream> //Required to open/close and read a file
#include <string> //Required to use a string
using namespace std;

string racerName;
int choice;
int races = 0;
int wins = 0;
int falls = 0;
int speed = 1;
int agility =1;
int jump =1;
int howLongRace;
int choiceToDo;
int years;

int main () {

// 	1. Display Songs by Year
// 2. Add Song
// 3. Display Playlist
// 4. Play Song
// 5. Quit

   
   cout << "Welcome to UMBC Music Player
Songs loaded: 1200
\n";
  
    do {
    cout << "What would you like to do? " << endl;
    cout << "1. Display Songs by Year" << endl;
    cout << "2. Add Song" << endl;
	cout << "3. Display Playlist" << endl;
    cout << "4. Play Song" << endl;
    cout << "5. Quit"<< endl;
    cin >> choice;

        //check for validation
        if (choice < 1 || choice > 5) {
        while (choice < 1 || choice > 5) {
            cout << "\nInvalid selection. Please re-enter: " << endl;
            cin >> choice;
        }
        }
        if (choice == 1){
			cout << choice << endl;
			cout << "Which year would you like to display? (2010-2021)" << endl;
			cin >> yeas;
			cout << "******" << years << "*****" << endl;
			//display all the music songs.
			while (i < howLongRace ){
				cout << "What would you like to do?" << endl;
				cout << "1. Get Race Status\n2. Try to Sprint (Speed)\n3. Try to Dodge (Agility)\n4. Try to Jump (Jump)" << endl;
				cin >> choiceToDo;
				if (choiceToDo == 1){
					cout << "Which year would you like to display? (2010-2021)" << endl;
					cin >> years;
					cout <<"Player 1 is on a speed obstacle in (obstacle 1 of 3)\n
					Player 2 is on a speed obstacle in (obstacle 1 of 3)\n
					Player 3 is on a speed obstacle in (obstacle 1 of 3)\n"

				}
				if (choiceToDo ==2){
					cout << "Choose the songs you would like to add to the playlist." << endl;

				}
			}
			i++
        }

        if (choice == 2){
			cout << "Choose the songs you would like to add to the playlist." << endl;
			cout << "Which year would you like to display? (2010-2021)" << endl;
			cin >> years;
			cout << "******" << years << "*****" << endl;
			//display all the music songs.
			cout << "Enter the number of the song you would like to add:" << endl;
			cin numSong;
			cout << "Your Playlist" << endl;
			// playlist

		if (choice == 3){
			cout << "Your Playlist" << endl;
			// playlist
			cout << "Which year would you like to display? (2010-2021)" << endl;
			cin >> years;
			cout << "******" << years << "*****" << endl;
			//display all the music songs.
			cout << "Enter the number of the song you would like to add:" << endl;
			cin numSong;
		
			
        }

        cout << endl;

    }while(choice != 3);

  return 0;
}

 
 
 
