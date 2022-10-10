#include "Player.h"

const int SPEED = 0; //Starting value of all stats
const int AGILITY = 1;
const int JUMP= 2;
//Constructor -- Already Implemented
Player::Player() {
  
}
//Implement Getters here
string Player::GetName() {return m_name;}
int Player::GetSpeed() {return m_stat[SPEED];}
int Player::GetAgility() {return m_stat[AGILITY];}
int Player::GetJump() {return m_stat[JUMP];}
// int Player::GetStat(){return m_stat[3];};
int Player::GetRaces(){ return m_races;}
int Player::GetFalls(){ return m_falls;}

void Player::SetName(string name){m_name = name;}
// void Player::SetSpeed(int speed){m_stat[0] = speed;};
// void Player::SetGetStat(int stat){m_stat[3] = stat;};
void Player::SetRaces(int races){m_races = races;}
void Player::SetFalls(int falls){m_falls = falls;}


void Player:: DisplayStatus(){

}


void Player:: IncreaseStat(){

}


// void Player:: IncreaseWin(){

// }

int Player:: GetStat(int stat){
  return 0;

}