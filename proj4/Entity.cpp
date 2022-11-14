
   /***********************************************************
 ** File:    Entity.cpp
 ** Project: CMSC 202 - Project 4
 ** Author:  Ping Zhang
 ** Date     11/11/2022
 ** Section: N/A
 ** This file contains the header file of the Entity class
 **********************************************************/
   
   
   
#include "Entity.h"


// Name: Entity() - Default Constructor
  // Description: Abstract class - cannot directly instantiate this class
  // Preconditions: None
  // Postconditions: Populates variables used in child classes (may not be specifically used)
  Entity::Entity(){

  }


  // Name: Entity(string name , int health) - Overloaded Constructor
  // Description: Abstract class - cannot directly instantiate this class
  // Preconditions: None
  // Postconditions: Populates variables used in child classes
  Entity::Entity(string, int){

  }


//   // Name: virtual ~Entity - Virtual Destructor
//   // Description: Makes sure everything in child class is deallocated
//   // Preconditions: None
//   // Postconditions: Everything dynamically allocated is deallocated
//   virtual ~Entity();

Entity::~Entity(){

}

  // Name: GetName()
  // Description: Returns name of entity
  // Preconditions: Entity has name
  // Postconditions: None
  string Entity::GetName(){
	return "getname";
  }


  // Name: GetHealth()
  // Description: Returns health of entity
  // Preconditions: Entity has health
  // Postconditions: None
  int Entity::GetHealth(){
	return 1;
  }


  // Name: SetName()
  // Description: Sets name of entity
  // Preconditions: None
  // Postconditions: Name is set
  void Entity::SetName(string){

  }


  // Name: SetHealth()
  // Description: Sets health of entity
  // Preconditions: None
  // Postconditions: Health is set
  void Entity::SetHealth(int){

  }


