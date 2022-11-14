   #include "Zerg.h"
 
 
 
 // Name: Zerg() - Default Constructor
  // Description: Would be used to create a zerg but abstracted
  // Preconditions: None
  // Postconditions: Used to populate child class data
  Zerg::Zerg(){

  }


  // Name: Zerg(string name, int hp) - Overloaded Constructor
  // Description: Would be used to create a Zerg but abstracted
  // Preconditions: None
  // Postconditions: Used to populate child class data
  Zerg::Zerg(string, int){

  }


  // Name: Attack()
  // Description: Describes attack statements for Zerg
  // Preconditions: None
  // Postconditions: Returns damage
  int Zerg::Attack(){
	return 1;
  }



  // Name: SpecialAttack()
  // Description: Purely virtual SpecialAttack
  // Preconditions: None
  // Postconditions: May be used to call child class SpecialAttack