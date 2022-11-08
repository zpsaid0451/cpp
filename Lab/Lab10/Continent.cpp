
#include "Continent.h"

 // Name: Playlist() - Default Constructor
  // Desc - Creates a new empty playlist
  // Preconditions - None
  // Postconditions - Sets everything to either nullptr or 0
  Continent::Continent(){
    
  }

 // Destructor
  // Preconditions: None
  // Postconditions: None
  Continent:: ~Continent(){

  }

  // Overloaded Constructor
  // Preconditions: None
  // Postconditions: Member variables initialized
   Continent::Continent(string name){
		m_myName = name;
		SetType("Continent");
   }

  // callMyName - Prints name
  // Preconditions: Has a name
  // Postconditions: None
  void Continent::CallMyName(){
	 cout << "I am the continent of " << m_myName << endl;
  }

  // describeMe() - gives description of given landmass
  // Preconditions: None
  // Postconditions: None
  void  Continent::DescribeMe(){
		cout << "I am one of seven continents!" <<endl;
  }