
#include "Marine.h"

// Name: Marine() - Default Constructor
  // Description: Creates a new marine
  // Preconditions: None
  // Postconditions: Can create a marine
  Marine::Marine(){

  }

  // Name: Marine(string name, int hp)
  // Description: Creates a new Marine
  // Preconditions: None
  // Postconditions: Can create a Marine
  Marine::Marine(string, int){

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
	return 2;
  }