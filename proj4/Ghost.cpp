 
 #include "Ghost.h"
 
 
 
 // Name: Ghost() - Default Constructor
  // Description: Creates a new Ghost
  // Preconditions: None
  // Postconditions: Can create a Ghost
  Ghost::Ghost(){

  }


  // Name: Ghost(string name, int hp)
  // Description: Creates a new Ghost
  // Preconditions: None
  // Postconditions: Can create a Ghost
  Ghost::Ghost(string, int){

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
	return 1;
  }