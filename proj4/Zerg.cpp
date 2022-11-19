   #include "Zerg.h"
 
 
 
 // Name: Zerg() - Default Constructor
  // Description: Would be used to create a zerg but abstracted
  // Preconditions: None
  // Postconditions: Used to populate child class data
  Zerg::Zerg():Entity(){

  }


  // Name: Zerg(string name, int hp) - Overloaded Constructor
  // Description: Would be used to create a Zerg but abstracted
  // Preconditions: None
  // Postconditions: Used to populate child class data
  Zerg::Zerg(string name, int hp):Entity(name, hp){
	// m_name = name;
	// m_health = hp;
  }


  // Name: Attack()
  // Description: Describes attack statements for Zerg
  // Preconditions: None
  // Postconditions: Returns damage
  int Zerg::Attack(){
    cout << GetName() << " deals 1 point of damage! " << endl;
    return 1;
  }



  // Name: SpecialAttack()
  // Description: Purely virtual SpecialAttack
  // Preconditions: None
  // Postconditions: May be used to call child class SpecialAttack