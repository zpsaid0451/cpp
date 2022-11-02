#include "Traveler.h"
#include <string>
using namespace std;

Traveler::Traveler():NPC(){

}

Traveler:: Traveler(string name, string description, string dialogue,string origin, string weapon, int power)
	:NPC(name,description,dialogue)   {
		m_origin = origin;
		m_weapon = weapon;
		m_power = power;
	}    



string Traveler:: GetOrigin() { 
        return m_origin; 
    }
string Traveler::GetWeapon() { 
        return m_weapon; 
    }
int  Traveler::GetPower() { 
        return m_power; 
    }
void Traveler::Fight(int power){
	if(m_power > power){
		cout << "traveler won" << endl;

	}else{
		cout << "traveler lose" << endl;
	}
	}
void Traveler::Inquire(){
	cout << m_origin;
	}

//	Traveler.Fight() will compare your power stat (a randomly generated
//number between 1-100) to the traveler’s stat