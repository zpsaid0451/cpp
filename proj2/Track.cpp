#include "Track.h"
#include <cstdlib>

// Name: Track() - Default Constructor
// Desc: Used to build a new Track with default length 4
// Sets track so that all players start in position 0
// Preconditions - Requires default values
// Postconditions - Creates new Track with a default length 4 and each m_track = 0
Track::Track() {
	m_length = 4;
	m_track[0] = 0;
	m_track[1] = 0;
	m_track[2] = 0;
	m_track[3] = 0;

}

void Track::SetLength(int length){m_length = length;}


// Name: PopulatsObstacles()
// Desc - For each length of track, assigns random type of obstacle (speed, agility, jump)
//        Uses integers (0 = speed, 1 = agility, 2 = jump)
// Preconditions - Track exists
// Postconditions - Populates m_obstacle with random number between 0 and 2
void Track:: PopulateObstacles(){
	for (int i = 0; i < MAX_LENGTH; ++i){ //loops for each NUM_NUMBERS
        m_obstacle[i] = rand % 3;
    // 
    }

}

// Name: GetStatus()
// Desc - Returns the status of race
// Preconditions - Track exists
// Postconditions - Outputs where each racer is in track and the type of obstacle
int Track::GetObstacle(int location){
	return m_obstacle[location];

}

// Name: ConvertObstacle
// Desc - Returns the string name of the obstacle using the OBSTACLE_TYPE
//        array for a specific player
// Preconditions - Player exists in m_track
// Postconditions - Pulls the location from m_track for a provided player
//                  then returns the obstacle at that location
string Track::ConvertObstacle(int player){

	location = m_track[player]
    return OBSTACLE_TYPE[GetObstacle(location)];
}

 // Name: GetStatus()
  // Desc - Returns the status of race
  // Preconditions - Track exists
  // Postconditions - Outputs where each racer is in track and the type of obstacle
void Track:: GetStatus(){
	// string obstacleName = ConvertObstacle(int player);
	// cout << "You are on a "<<s>> obstacle (obstacle" << m_track[0] << "of "<< m_length << ")" << endl;
	// 				// get race status
	// 				cout <<"Player 1 is on a speed obstacle in (obstacle 1 of 3)\n
	// 				Player 2 is on a speed obstacle in (obstacle 1 of 3)\n
	// 				Player 3 is on a speed obstacle in (obstacle 1 of 3)\n"

}


void Track:: IncrementLocation(int player){

}


int Track::CheckWin(){
	return 1;
}

void Track::ResetLocation(){

}