  /*Title: Marine.cpp
Author: Ping Zhang
Date: 11/11/2022
Description: This is marine cpp files of UMBC Starcraft project
*/

#include "Marine.h"
#include <random>

// Name: Marine() - Default Constructor
  // Description: Creates a new marine
  // Preconditions: None
  // Postconditions: Can create a marine
  Marine::Marine():Terran(){

  }

  // Name: Marine(string name, int hp)
  // Description: Creates a new Marine
  // Preconditions: None
  // Postconditions: Can create a Marine
  Marine::Marine(string name, int hp):Terran(name, hp){
  }
  // Name: ~Marine - Virtual Destructor
  // Description: Makes sure everything in child class is deallocated
  // Preconditions: None
  // Postconditions: Everything dynamically allocated is deallocated
  Marine::~Marine(){

  }

  // Name: SpecialAttack
  // Description: Defines the Marine's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
  int Marine::SpecialAttack(){
    cout << GetName() << " spins up doing GATLING DAMAGE! " << endl;
    int marineAttack = (rand() % (8 - 1 + 1)) + 1;
    return marineAttack;
  }