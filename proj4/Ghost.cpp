   /*Title: Ghost.cpp
Author: Ping Zhang
Date: 11/11/2022
Description: This is ghost cpp files of UMBC Starcraft project
*/
 
 #include "Ghost.h"
 #include <random>
 
 
 // Name: Ghost() - Default Constructor
  // Description: Creates a new Ghost
  // Preconditions: None
  // Postconditions: Can create a Ghost
  Ghost::Ghost():Terran(){
	// m_name = "Ghost";
	// m_health = 10;
  }


  // Name: Ghost(string name, int hp)
  // Description: Creates a new Ghost
  // Preconditions: None
  // Postconditions: Can create a Ghost
  Ghost::Ghost(string name, int hp):Terran(name, hp){
	// m_name = name;
	// m_health = hp;
  }


  // Name: ~Ghost - Virtual Destructor
  // Description: Makes sure everything in child class is deallocated
  // Preconditions: None
  // Postconditions: Everything dynamically allocated is deallocated
  Ghost::~Ghost(){

  }


  // Name: SpecialAttack
  // Description: Defines the Ghost's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
  int Ghost::SpecialAttack(){
   
    int ghostAttack = (rand() % (12 - 2 + 2)) + 2;
    cout << GetName() << "performs a sneak attack!" << endl;
    return ghostAttack;
  }