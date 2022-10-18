//Title: money.cpp
//Author: CMSC 202
//Date: 10/17/2022
//Desc: This is an example of overloading the - operator and the << operator
#include <iostream>
using namespace std;

class Money{
public:
  Money(){ //Default constructor
    m_dollars = 0;
    m_cents = 0;
  }
  Money(int dollars, int cents){ //Overloaded constructor
    m_dollars = dollars;
    m_cents = cents;
  }
  Money operator- (const Money &amount2){ //Allows Money to be subtracted from another money
    if(amount2.m_cents > m_cents){ //If the amount being subtracted is greater than amount you have
      m_dollars -= 1; //Reduce dollars by 1
      m_cents += 100; //Increase cents by 100
    }
    return Money(m_dollars - amount2.m_dollars, m_cents - amount2.m_cents); //Returns money object
  }
  //Friend functions in a class allow the function to be accessed outside the class
  friend ostream &operator<< (ostream &output, const Money &amount2){ //Prints a formatted Money
    output << "$" << amount2.m_dollars << "." << amount2.m_cents; 
    return output;
  }
private:
  int m_dollars; //Private member variable
  int m_cents; //Private member variables
};

int main () {
  Money cash(799,65); //Uses overloaded constructor
  Money bills(99,85); //Uses overloaded constructor

  //"cout << cash" uses the overloaded << operator to print a formatted version of the cash
  //"<< cash-bills" uses the overloaded - operator to do the "correct" calculation of the cash
  //Because the output of "cash-bills" is a Money object, it uses the overloaded << operator to
  //format the output as Money
  cout << cash << " minus " << bills << " equals " << cash-bills << endl;
  
  return 0;
}
