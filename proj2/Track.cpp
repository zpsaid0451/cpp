#include "Track.h"


//Constructor -- Already Implemented
Track::Track() {
 
}
//Implement Getters here



void Track::SetLength(int length){m_length = length;}
// void Track::SetSpeed(int speed){m_stat[0] = speed;};
// void Track::SetGetStat(int stat){m_stat[3] = stat;};



void Track:: PopulateObstacles(){

}

int Track::GetObstacle(int location){
	return 0;
}

string Track::ConvertObstacle(int player){
    return " ";
}

void Track:: GetStatus(){

}


void Track:: IncrementLocation(int player){

}


int Track::CheckWin(){
	return 1;
}

void Track::ResetLocation(){

}