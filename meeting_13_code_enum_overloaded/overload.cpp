/*Title: overload.cpp
Author: CMSC 202
Date: 10/17/2022
Description: This is introducing overloaded operators in c++.
*/

#include <iostream>
using namespace std;
 
class Distance {
 public:
  // required constructors
  Distance(){ //Default Constructor
    m_feet = 0;
    m_inches = 0;
  }
  Distance(int f, int i){ //Overloaded Constructor
    m_feet = f;
    m_inches = i;
  }
  int getFeet(){return m_feet;} //Getter

  int getInches(){return m_inches;} //Getter

  void setFeet(int feet){m_feet = feet;} //Setter

  void setInches(int inches){m_inches = m_inches;} //Setter

  void convertLength(){ //If inches is > 12, converts to feet/inches
    if(m_inches > 12){
      m_feet += m_inches/12;
      m_inches = m_inches%12;
    }
  }

  //Overloaded << insertion operator
  friend ostream &operator<<( ostream &output,
			      Distance &D ) { //Public friend function to output
    D.convertLength(); //Converts when inches > 12 to feet
    output << "Feet : " << D.m_feet << " Inches : " << D.m_inches; //Outputs
    //D.convertLength();
    return output;
  }

  //friend functions are considered public and have access to private variables
  //Overloaded >> extraction operator
  friend istream &operator>>( istream  &input, Distance &D ) {
    cout << "You are creating a new box - enter the side length:" << endl;
    cout << "Enter feet: " << endl;
    input >> D.m_feet;
    cout << "Enter inches: " << endl;
    input >> D.m_inches;
    return input;
  }

 private:
  int m_feet;             // 0 to infinite
  int m_inches;           // 0 to 12
};

int main() {
  Distance D1(11, 10), D2(5, 11), D3;
  cin >> D3; //When this is called, the normal cin is not - it calls the overloaded
             // >> function above
  cout << "First Distance : " << D1 << endl; //Calls the overloaded << operator
  cout << "Second Distance :" << D2 << endl; //Calls the overloaded << operator
  cout << "Third Distance :" << D3 << endl; //Calls the overloaded << operator


  return 0;
}



// class note make int to double

/*Title: overload.cpp
Author: CMSC 202
Date: 10/17/2022
Description: This is introducing overloaded operators in c++.
*/

#include <iostream>
using namespace std;
 
class Distance {
 public:
  // required constructors
  Distance(){ //Default Constructor
    m_feet = 0;
    m_inches = 0;
  }
  Distance(double feet, double inches){ //Overloaded Constructor
    m_feet = feet;
    m_inches = inches;
  }
  double getFeet(){return m_feet;} //Getter

  double getInches(){return m_inches;} //Getter

  void setFeet(int feet){m_feet = feet;} //Setter
    if(feet<0){
      m_feet = 0;
    }else {
      m_feet = feet;
    }

  void setInches(int inches){m_inches = m_inches;} //Setter
    if(inches<0){
      m_inches = 0;
    }else {
      m_inches = inches;
    }
  void convertLength(){ //If inches is > 12, converts to feet/inches
    if(m_inches > 12){
      m_feet += m_inches/12;
      m_inches = int(m_inches%12);
    }
  }

  //Overloaded << insertion operator
  friend ostream &operator<<( ostream &output,
			      Distance &D ) { //Public friend function to output
    D.convertLength(); //Converts when inches > 12 to feet
    output << "Feet : " << D.m_feet << " Inches : " << D.m_inches; //Outputs
    //D.convertLength();
    return output;
  }

  //friend functions are considered public and have access to private variables
  //Overloaded >> extraction operator
  friend istream &operator>>( istream  &input, Distance &D ) {
    cout << "You are creating a new box - enter the side length:" << endl;
    cout << "Enter feet: " << endl;
    input >> D.m_feet;
    cout << "Enter inches: " << endl;
    input >> D.m_inches;
    return input;
  }

 private:
  double m_feet;             // 0 to infinite
  double m_inches;           // 0 to 12
};

int main() {
  Distance D1(11, 10);
  Distance D2(5, 11);
  Distance D3;
  cin >> D3; //When this is called, the normal cin is not - it calls the overloaded                   memory address.  cin >> *D3; 变成value
             // >> function above
  cout << "First Distance : " << D1 << endl; //Calls the overloaded << operator
  cout << "Second Distance :" << D2 << endl; //Calls the overloaded << operator
  cout << "Third Distance :" << D3 << endl; //Calls the overloaded << operator


  return 0;
}
