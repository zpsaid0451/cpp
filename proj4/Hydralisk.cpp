
  /*Title: Hydralisk.cpp
Author: Ping Zhang
Date: 11/11/2022
Description: This is hydralisk cpp files of UMBC Starcraft project
*/
#include "Hydralisk.h"

// Name: Hydralisk() - Default Constructor
  // Description: Creates a new Hydralisk
  // Preconditions: None
  // Postconditions: Can create a Hydralisk
Hydralisk::Hydralisk():Zerg(){
	// m_name = "Hydralisk";
	// m_health = 7;

}


  // Name: Hydralisk(string name, int hp)
  // Description: Creates a new Hydralisk
  // Preconditions: None
  // Postconditions: Can create a Hydralisk
Hydralisk::Hydralisk(string name, int hp):Zerg(name,hp){
	// m_name = name;
	// m_health = hp;

}
  // Name: SpecialAttack
  // Description: Defines the Hydralisk's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
int Hydralisk::SpecialAttack(){
	cout << GetName() << " sprays you with deadly acid! " << endl;
	return 2;
}