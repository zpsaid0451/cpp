#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SoccerPlayer{
public:
	SoccerPlayer(string name)
		: m_name(name){}
 	string GetName() { return m_name; }
private:
	string m_name;
};
 
class SoccerTeam {
public:
	SoccerTeam(){}
 
	void add(SoccerPlayer *player){
		m_soccerTeam.push_back(player);
	}
 
	friend ostream& operator <<(ostream &out, const SoccerTeam &team){
		out << "Soccer Team: ";
		for (const auto &element : team.m_soccerTeam) //C++ enabled for each loop
			out << element->GetName() << ' ';
		out << '\n';

		return out;
	}
private:
	vector<SoccerPlayer*> m_soccerTeam;
};
 
int main(){
    // Create a soccer player outside the scope of the soccer team
	SoccerPlayer *p1 = new SoccerPlayer("Bob"); // create a soccer player
	SoccerPlayer *p2 = new SoccerPlayer("Abdul"); // create a soccer player
	SoccerPlayer *p3 = new SoccerPlayer("Beth"); // create a soccer player
 
	{ //New Scope!
		// Create a soccer team and add some SoccerPlayers to it
		SoccerTeam team; // create an empty Soccer Team
		team.add(p1);
		team.add(p2);
		team.add(p3);
 
		cout << team;
 
	} // team goes out of scope here and is destroyed
 
	cout << p1->GetName() << " still exists!\n";
	cout << p2->GetName() << " still exists!\n";
	cout << p3->GetName() << " still exists!\n";
 
	delete p1;
	delete p2;
	delete p3;
 
	return 0;
}