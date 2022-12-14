#include "Player.h"


// Name: Player() - Default Constructor
// Desc: Used to build a new Player
// Preconditions - Requires default values
// Postconditions - Creates new Player (with default name of "Beannie" with 1 speed/agility/jump
Player::Player() {
  m_name = "Beannie";
  m_stat[0] = 1;
  m_stat[1] = 1;
  m_stat[2] = 1;
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
  m_stat[0] = 1;
  m_stat[1] = 1;
  m_stat[2] = 1;
  m_races = 0;
  m_wins = 0;
  m_falls = 0;
}
//Implement Getters here
string Player::GetName() {return m_name;}
void Player::SetName(string name){m_name = name;}
int Player::GetSpeed() {return m_stat[0];}
int Player::GetAgility() {return m_stat[1];}
int Player::GetJump() {return m_stat[2];}
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
			cout << "\nStats " << endl;
			cout << "Speed:  " <<  m_stat[0] << endl;
			cout << "Agility:   " << m_stat[1] << endl;
			cout << "Jump:  " << m_stat[2] << endl;
 
}

// Name: IncreaseStat
// Desc - Asks the user for a stat to increase (speed, agility, or jump) up to a max of 10
// Precondition - Called after winning a race
// Postconditions - Increases one stat by one point (max 10)
void Player:: IncreaseStat(){
    int choiceStat;
    cout << "Which stat would you like to increase?" << endl;
    cout << "1. Speed" << endl;
    cout << "2. Agility" << endl;
    cout << "3. Jump"<< endl;
    cin >> choiceStat;

    //check for validation
    if (choiceStat < 1 || choiceStat> 3) {
        while (choiceStat < 1 || choiceStat > 3) {
          cout << "Which stat would you like to increase?" << endl;
          cout << "1. Speed" << endl;
          cout << "2. Agility" << endl;
          cout << "3. Jump"<< endl;
          cin >> choiceStat;
        }
    }
    if (choiceStat == 1){
        m_stat[0] +=1;
    }

    if (choiceStat == 2){
        m_stat[1] ++;
    }

    if (choiceStat == 3){
        m_stat[2]++;
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

void Player::IncreaseWins(){
  m_wins++;
}