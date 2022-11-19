  /*Title: Area.cpp
Author: Ping Zhang
Date: 11/11/2022
Description: This is areas cpp files of UMBC Starcraft project
*/
  
  
  #include "Area.h"

  

  Area::Area(int areaID, string areaName, string areaDesc, int north, int east, int south, int west){
	m_ID = areaID;
    m_name = areaName;
    m_desc = areaDesc;
    m_direction[0] = north;
	m_direction[1] = east;
	m_direction[2] = south;
	m_direction[3] = west;


  }

  //Name: GetName
  //Precondition: Must have valid area
  //Postcondition: Returns area name as string
  string Area::GetName(){
	return m_name;
  }


  //Name: GetID
  //Precondition: Must have valid area
  //Postcondition: Returns area id as int
  int Area::GetID(){
	return m_ID;
  }



  //Name: GetDesc
  //Precondition: Must have valid area
  //Postcondition: Returns area desc as string
  string Area::GetDesc(){
	return m_desc;
  }


  //Name: CheckDirection
  //Precondition: Must have valid area
  //You pass it a char (N/n, E/e, S/s, or W/w) and if that is a valid exit it
  //returns the ID of the area in that direction
  //Postcondition: Returns id of area in that direction if the exit exists
  //If there is no exit in that direction, returns -1
  int Area::CheckDirection(char myDirection){

	if (myDirection == 'N' || myDirection == 'n'){
		return m_direction[n];
	}
	else if (myDirection == 'E' || myDirection == 'e'){
		//use enum
		return m_direction[E];
	}
	else if (myDirection == 'S' || myDirection == 's'){
		//use enum
		return m_direction[S];
	}
    else if (myDirection == 'W' || myDirection == 'w'){
		//use enum
		return m_direction[W];
	} else {
		return -1;
	}
  }
  //Name: PrintArea
  //Precondition: Area must be complete
  //Postcondition: Outputs the area name, area desc, then possible exits
  void Area::PrintArea(){
	cout << m_name << endl;
	cout << m_desc << endl;

	//check all 4 direction, display the direction that is related to another area (areaid != -1) 
	string exits = "";
	
	// for (int i = 0; i< 4;i++){
	// 	if (m_direction[i] != -1){
	// 		exit = exit + 
	// 	}
	// }
	int directionPosition = CheckDirection('N');

	if (directionPosition != -1){

		exits = "N";
	}
	
	directionPosition = CheckDirection('E');
	if (directionPosition != -1){
		

		exits = exits + "E";
	}
	directionPosition = CheckDirection('S');
	if (directionPosition != -1){

		exits = exits + "S";
	}
	directionPosition = CheckDirection('W');
	if (directionPosition != -1){

		exits = exits + "W";
	}
	
	//check if there is an exit
	if(exits != ""){
		cout << "Possible Exits: " << exits<< endl;
	}else{
		cout << "There is no exit" << endl;

	}
	
  }