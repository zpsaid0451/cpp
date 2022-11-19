#include "Zergling.h"


  // Name: Zergling() - Default Constructor
  // Description: Creates a new Zergling type of zerg
  // Preconditions: None
  // Postconditions: Can create a Zergling
  Zergling::Zergling():Zerg(){
	// m_name = "Zergling";
	// m_health = 1;
  }


  // Name: Zergling(string name, int hp)
  // Description: Creates a new Zergling
  // Preconditions: None
  // Postconditions: Can create a Zergling
  Zergling::Zergling(string name, int hp):Zerg(name,hp){
	// m_name = name;
	// m_health = hp;
  }


  // Name: SpecialAttack
  // Description: Defines the Zergling's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
  int Zergling::SpecialAttack(){
    cout <<GetName() << "scratches at you ferociously!" << endl;
    return 1;
  }