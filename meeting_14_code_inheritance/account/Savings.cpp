#ifndef SAVINGS_CPP
#define SAVINGS_CPP
#include "Account.cpp"
#include <iostream>
#include <string>

class Savings: public Account{
public:
  Savings(){
    m_interest = 0;
    setFName("");
    setLName("");
    setAccountNum(0);
    m_balance = 0.0;
  }
  double getInterest(){return m_interest;}
  void setInterest(double interest){m_interest = interest;}
private:
  double m_interest; //0.20 equals 20%
};

#endif
