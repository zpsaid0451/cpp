 
  #include "Landmass.h"


 Landmass:: Landmass(){}

  // Destructor
  // Preconditions: None
  // Postconditions: None
  Landmass::~Landmass(){}

  // callMyType() - Prints object's type
  // Preconditions: Object exists
  // Postconditions: Object's type is printed
  void Landmass::CallMyType(){
	cout << "My type is " << m_myType << endl;
  }

  // callMyName() - Prints object's name
  // Preconditions: Object exists
  // Postconditions: Object's name is printed
  //virtual void CallMyName() = 0; // <- Declares as purely virtual function

  // getType() - returns myType
  // Preconditions: myType is initialized
  // Postconditions: None
  string Landmass::GetType(){
	return m_myType;
  }

  // setType() - sets value of myType
  // Preconditions: None
  // Postconditions: None
  void Landmass::SetType(string type){
		m_myType = type;
  }


 // describeMe() - gives description of given landmass
  // Preconditions: None
  // Postconditions: None
 // virtual void DescribeMe() = 0;