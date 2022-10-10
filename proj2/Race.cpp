#include "Race.h"

string racerName;
int choice;

Race::Race() {
 
 



}
//Implement Getters here
// int Race::GetLength(){return m_length;}

// int Race::GetStat(){return m_stat[3];};


// void Race::SetLength(int length){ return m_length = length;}
// void Race::SetSpeed(int speed){m_stat[0] = speed;};
// void Race::SetGetStat(int stat){m_stat[3] = stat;};



void Race:: StartRace(){
m_track.SetLength

 loop all player.increasestat
    
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
    return 1;
}
void Race:: ManageGame(){
    StartRace();
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
      
        }

        if (choice == 2){
       
        }

        cout << endl;

    }while(choice != 3);

}


void Race:: ProgressComputer(int obstacleDifficulty){

}
