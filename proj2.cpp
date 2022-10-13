 
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

int main () {
    // string fName; //Declaration of a string
    // string lName; //Declaration of a string
    // int age;
   
   cout << "What is your racer's name?\n";
    cin >> racerName;
	cout << racerName << endl;
    do {
    cout << "What would you like to do? " << endl;
    cout << "1. Start New Race" << endl;
    cout << "2. View Racer History" << endl;
    cout << "3. Quit"<< endl;
    cin >> choice;

        //check for validation
        if (choice < 1 || choice > 3) {
        while (choice < 1 || choice > 3) {
            cout << "\nInvalid selection. Please re-enter: " << endl;
            cin >> choice;
        }
        }
        if (choice == 1){
			cout << choice << endl;
			cout << "\n1 " << endl;
			cout << choice << endl;
			cout << "How long would you like the race?" << endl;
			cin >> howLongRace;
			while (i < howLongRace ){
				cout << "What would you like to do?" << endl;
				cout << "1. Get Race Status\n2. Try to Sprint (Speed)\n3. Try to Dodge (Agility)\n4. Try to Jump (Jump)" << endl;
				cin >> choiceToDo;
				if (choiceToDo == 1){
					cout << "You are on a speed obstacle (obstacle 1 of 3)" << endl;
					// get race status
					cout <<"Player 1 is on a speed obstacle in (obstacle 1 of 3)\n
					Player 2 is on a speed obstacle in (obstacle 1 of 3)\n
					Player 3 is on a speed obstacle in (obstacle 1 of 3)\n"

				}
				if (choiceToDo ==2){
					cout << "You are trying to progress the race!" << endl;

				}
			}
			i++
        }

        if (choice == 2){

			cout << "You are trying to progress the race!" << endl;
			cout << "Races:  " << races << endl;
			cout << "Wins:   " << wins << endl;
			cout << "Falls:  " << falls << endl;
			cout << "\n  Stats " << endl;
			cout << "Speed:  " <<  speed << endl;
			cout << "Agility:   " << agility << endl;
			cout << "Jump:  " << jump << endl;
			
        }

        cout << endl;

    }while(choice != 3);

  return 0;
}

 
 
 
