 
   #include "Battlecruiser.h"
 
 
  // Name: Battlecruiser() - Default Constructor
  // Description: Creates a new Battlecruiser
  // Preconditions: None
  // Postconditions: Can create a Battlecruiser
  Battlecruiser::Battlecruiser():Terran(){
	
  }
  // Name: Battlecruiser(string name, int hp)
  // Description: Creates a new Battlecruiser
  // Preconditions: None
  // Postconditions: Can create a Battlecruiser
   Battlecruiser::Battlecruiser(string name, int hp):Terran(name, hp){
	// m_name = name;
	// m_health = hp;
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
	  cout << GetName() << "uses the Yomato Cannon!" << endl;
    int battlecruiserAttack = (rand() % (12 - 3 + 3)) + 3;
    return battlecruiserAttack;
	
  }