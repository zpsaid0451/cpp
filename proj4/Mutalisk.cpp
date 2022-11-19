 
   /*Title: Mutalisk.cpp
Author: Ping Zhang
Date: 11/11/2022
Description: This is mutalisk cpp files of UMBC Starcraft project
*/

#include "Mutalisk.h"
 
  // Name: Mutalisk() - Default Constructor
  // Description: Creates a new Mutalisk
  // Preconditions: None
  // Postconditions: Can create a Mutalisk
  Mutalisk::Mutalisk():Zerg(){
	// m_name = "Mutalisk";
	// m_health = 5;
  }

  // Name:  Mutalisk(string name, int hp)
  // Description: Creates a new Mutalisk
  // Preconditions: None
  // Postconditions: Can create a Mutalisk
  Mutalisk::Mutalisk(string name, int hp):Zerg(name,hp){
	// m_name = name;
	// m_health = hp;
  }


  // Name: SpecialAttack
  // Description: Defines the Mutalisk's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
  int Mutalisk::SpecialAttack(){
    cout << GetName() << "Blasts you with their attack! " << endl;
    return 4;
  }