 
   #include "Battlecruiser.h"
 
 
  // Name: Battlecruiser() - Default Constructor
  // Description: Creates a new Battlecruiser
  // Preconditions: None
  // Postconditions: Can create a Battlecruiser
  Battlecruiser::Battlecruiser(){

  }
  // Name: Battlecruiser(string name, int hp)
  // Description: Creates a new Battlecruiser
  // Preconditions: None
  // Postconditions: Can create a Battlecruiser
   Battlecruiser::Battlecruiser(string, int){

   }


  // Name: ~Battlecruiser - Virtual Destructor
  // Description: Makes sure everything in child class is deallocated
  // Preconditions: None
  // Postconditions: Everything dynamically allocated is deallocated
	Battlecruiser::~Battlecruiser(){

	}


  // Name: SpecialAttack
  // Description: Defines the Battlecruiser's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
  int Battlecruiser::SpecialAttack(){
	return 1;
  }