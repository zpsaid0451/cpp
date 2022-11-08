  #include "Island.h"

  Island::Island(){
  }

  // Destructor
  // Preconditions: None
  // Postconditions: None
  Island::~Island(){}

  // Overloaded Constructor
  // Preconditions: None
  // Postconditions: Member variables initialized
  Island::Island(string name){
	m_myName = name;
	SetType("Island");
  }

  // callMyName - Prints name
  // Preconditions: Has a name
  // Postconditions: None
  void Island::CallMyName(){
	cout << "I am a beautiful island named " << m_myName << endl;
  }

  // describeMe() - gives description of given landmass
  // Preconditions: None
  // Postconditions: None
  void Island::DescribeMe(){
	cout << "I am surrounded by a body of water." << endl;
  }