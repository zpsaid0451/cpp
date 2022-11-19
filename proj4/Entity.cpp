
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
  Entity::Entity(string name, int health){
	m_name = name;
	m_health = health;
  }


//   // Name: virtual ~Entity - Virtual Destructor
//   // Description: Makes sure everything in child class is deallocated
//   // Preconditions: None
//   // Postconditions: Everything dynamically allocated is deallocated
//   virtual ~Entity();

Entity::~Entity(){
	m_name = "";
	m_health = 0;
}

  // Name: GetName()
  // Description: Returns name of entity
  // Preconditions: Entity has name
  // Postconditions: None
  string Entity::GetName(){
	  return m_name;
  }


  // Name: GetHealth()
  // Description: Returns health of entity
  // Preconditions: Entity has health
  // Postconditions: None
  int Entity::GetHealth(){
    return m_health;
  }


  // Name: SetName()
  // Description: Sets name of entity
  // Preconditions: None
  // Postconditions: Name is set
  void Entity::SetName(string name){
	m_name = name;
  }


  // Name: SetHealth()
  // Description: Sets health of entity
  // Preconditions: None
  // Postconditions: Health is set
  void Entity::SetHealth(int health){
	m_health = health;
  }


