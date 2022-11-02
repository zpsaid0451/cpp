#ifndef CHECKING_CPP
#define CHECKING_CPP
#include <iostream>
#include <string>
#include "Account.cpp"

class Checking: public Account{
public:
  Checking(){
    m_interest = 0.5;
    setFName("");
    setLName("");
    setAccountNum(0);
    m_balance = 100.0;
  }
  Checking(string fName, string lName, double balance, int account, double interest):Account(fName, lName, balance, account){
    m_interest = interest;
  }
  double getInterest(){return m_interest;}
  void setInterest(double interest){m_interest = interest;}
  void displayTotalInterest(){
    cout << m_balance * m_interest << endl;
  }
private:
  double m_interest; //0.20 equals 20%
};

#endif
