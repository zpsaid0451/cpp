#include "Race.h"

string racerName;
int choice;

Race::Race() {
 
}


void Race:: StartRace(){
    m_track.SetLength
// loop all player.increasestat
    
}

void Race::GetRacerInfo(){
    cout << "What is your racer's name?\n";
    cin >> racerName;
    m_myPlayer.SetName(racerName); 
}

void Race::ProgressRace(int){

}

bool Race::MainMenu(){
    return true;
}

int Race:: RaceOptions(){
    
}

// Name: ProgressComputer
// Desc - Iterates over each computer player (players 2, 3, and 4) to see if they
//        successfully navigate through an obstacle. Indicates if they make it or fall.
//        Compares a random number between COMP_MIN and COMP_MAX to the obstacle difficulty
//        to see if they are successful
// Preconditions - obstacleDifficulty is already calculated and passed to this function
// Postconditions - For each computer player, they either make it and increment their
//         location or fall and remain on the same obstacle
void Race:: ManageGame(){
    RaceTitle();
    GetRacerInfo();
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
//   return 0;
}


void Race:: ProgressComputer(int obstacleDifficulty){

}
