#include "Track.h"
#include <cstdlib>
const int NO_WON = 5;
// Name: Track() - Default Constructor
// Desc: Used to build a new Track with default length 4
// Sets track so that all players start in position 0
// Preconditions - Requires default values
// Postconditions - Creates new Track with a default length 4 and each m_track = 0
Track::Track() {
	m_length = 4;
	ResetLocation();


}

void Track::SetLength(int length){m_length = length;}


// Name: PopulatsObstacles()
// Desc - For each length of track, assigns random type of obstacle (speed, agility, jump)
//        Uses integers (0 = speed, 1 = agility, 2 = jump)
// Preconditions - Track exists
// Postconditions - Populates m_obstacle with random number between 0 and 2
void Track:: PopulateObstacles(){
	for (int i = 0; i < m_length; ++i){ //loops for each NUM_NUMBERS
        m_obstacle[i] = rand() % 3;
    // 
    }

}

// Name: GetStatus()
// Desc - Returns the status of race
// Preconditions - Track exists
// Postconditions - Outputs where each racer is in track and the type of obstacle
void Track:: GetStatus(){

	for (int player = 0; player < NUM_RACERS; player++){ 
		string obstacleName = ConvertObstacle(player);
		if (player == 0){
			cout << "You are on a " << obstacleName << " in (obstacle " << m_track[player] << " of " << m_length <<" )"<< endl;
		} else {
			cout << "Player " << player+1 << "is on a " << obstacleName << " in (obstacle " << m_track[player] << " of " << m_length <<" )" << endl;
		}
        
    }
}

// Name: CheckWin()
// Desc - Checks to see if the race is over by comparing each racer's
//        location to the length of the track.
//        Returns number of player who wins race (always starts at 0 first)
// Preconditions - Track exists
// Postconditions - Returns integer location of winner (0 is human). Always returns human in case of tie!
int Track:: CheckWin(){
	for (int i = 0; i < NUM_RACERS; i++){
		if (m_track[i] >= m_length){
			return i;
		}else {
			return NO_WON;
		}
	}
}

 // Name: GetObstacle
  // Desc - Returns the integer of the obstacle at a specific location
  // Preconditions - Track exists
  // Postconditions - Returns 0 for speed, 1 for agility, and 2 for jump
int Track::GetObstacle(int location){
	return m_obstacle[location];

}


// Name: IncrementLocation
// Desc - Increments the m_track value for a specific player the human player
//        is always in position 0
// Preconditions - Race starts with everyone having a 0
// Postconditions - Increases the integer value for a specific player
void Track:: IncrementLocation(int player){
	if (m_track[player] < m_length){
		m_track[player] ++;
	} 
}


// Name: ResetLocation
// Desc - Before each race, resets the starting location for all players back to 0
// Preconditions - Track exists
// Postconditions - All players has a starting location of 0 in the m_track
void Track::ResetLocation(){
	for (int i = 0; i < NUM_RACERS; i++){ 
        m_track[i] = 0;
    }
}

// Name: ConvertObstacle
// Desc - Returns the string name of the obstacle using the OBSTACLE_TYPE
//        array for a specific player
// Preconditions - Player exists in m_track
// Postconditions - Pulls the location from m_track for a provided player
//                  then returns the obstacle at that location
string Track::ConvertObstacle(int player){
	int location = m_track[player];
    return OBSTACLE_TYPE[GetObstacle(location)];
}
