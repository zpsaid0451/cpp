#include "NPC.h"
#include <string>
using namespace std;

NPC::NPC(){
	m_name = "";
	m_desc = "";
	m_dialogue ="";


}

NPC::NPC(string name, string description, string dialogue)
        : m_name(name), m_desc(description),m_dialogue(dialogue)  {
    }
string NPC::GetName() { 
        return m_name; 
    }
string NPC::GetDesc() { 
        return m_desc; 
    }
string NPC::GetDialogue() { 
        return m_dialogue; 
    }
void NPC::Talk(){
		cout << m_dialogue << endl;
	}
void NPC::Description(){
		cout << m_desc << endl;
	}