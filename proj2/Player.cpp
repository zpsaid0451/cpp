#include "Player.h"

const int SPEED = 0; //Starting value of all stats
const int AGILITY = 1;
const int JUMP= 2;



// Name: Player() - Default Constructor
// Desc: Used to build a new Player
// Preconditions - Requires default values
// Postconditions - Creates new Player (with default name of "Beannie" with 1 speed/agility/jump
Player::Player() {
  m_name = "Beannie";
  m_stat[SPEED] = 1;
  m_stat[AGILITY] = 1;
  m_stat[JUMP] = 1;
  m_races = 0;
  m_wins = 0;
  m_falls = 0;
}

// Name: Player(name) - Overloaded constructor
// Desc - Used to build a new Player
// Preconditions - Requires name
// Postconditions - Creates a new Player (with passed name and 1 speed/agility/jump)
// May not be used in the project explicitly but please implement
Player::Player(string name){
  m_name = name;
  m_stat[SPEED] = 1;
  m_stat[AGILITY] = 1;
  m_stat[JUMP] = 1;
  m_races = 0;
  m_wins = 0;
  m_falls = 0;
}
//Implement Getters here
string Player::GetName() {return m_name;}
void Player::SetName(string name){m_name = name;}
int Player::GetSpeed() {return m_stat[SPEED];}
int Player::GetAgility() {return m_stat[AGILITY];}
int Player::GetJump() {return m_stat[JUMP];}
int Player::GetRaces(){ return m_races;}
int Player::GetFalls(){ return m_falls;}
void Player::SetRaces(int races){m_races = races;}
void Player::SetFalls(int falls){m_falls = falls;}

// Name: DisplayStatus
  // Desc - Displays the player names and their stats
  // Precondition - None
  // Postconditions - Displays the player information
void Player:: DisplayStatus(){

  cout << "*****The Mighty Racer "<< m_name << " **********" << endl;
			cout << "Races:  " << m_races << endl;
			cout << "Wins:   " << m_wins << endl;
			cout << "Falls:  " << m_falls << endl;
			cout << "\n  Stats " << endl;
			cout << "Speed:  " <<  m_stat[SPEED] << endl;
			cout << "Agility:   " << m_stat[AGILITY] << endl;
			cout << "Jump:  " << m_stat[JUMP] << endl;
 
}

// Name: IncreaseStat
// Desc - Asks the user for a stat to increase (speed, agility, or jump) up to a max of 10
// Precondition - Called after winning a race
// Postconditions - Increases one stat by one point (max 10)
void Player:: IncreaseStat(){

    cout << "Which stat would you like to increase?" << endl;
    cout << "1. Speed" << endl;
    cout << "2. Agility" << endl;
    cout << "3. Jump"<< endl;
    cin >> choice;

    //check for validation
    if (choice < 1 || choice > 3) {
        while (choice < 1 || choice > 3) {
          cout << "Which stat would you like to increase?" << endl;
          cout << "1. Speed" << endl;
          cout << "2. Agility" << endl;
          cout << "3. Jump"<< endl;
          cin >> choice;
        }
    }
    if (choice == 1){
        m_stat[SPEED] +=1;
    }

    if (choice == 2){
        m_stat[AGILITY] ++;
    }

    if (choice == 3){
        m_stat[JUMP]++;
    }
     
}


// Name: GetStat
// Desc - Returns the value of a stat at a specific location (0 = speed, 1 = agility, 2 = jump)
// Precondition - None
// Postconditions - Returns the integer value of a specific stat
int Player:: GetStat(int stat){
  return stat;

}

// Name: IncreaseWins
// Desc - Increases the number of wins by 1
// Precondition - None
// Postconditions - Increases the number of wins by 1

void IncreaseWins(){
  m_wins ++;
}