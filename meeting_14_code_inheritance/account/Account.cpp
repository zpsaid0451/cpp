#ifndef ACCOUNT_CPP
#define ACCOUNT_CPP
#include <iostream>
#include <string>
using namespace std;
class Account{
public:
  Account(){
    m_accountNum = 0;
    m_fName = "";
    m_lName = "";
  }
  Account(string fName, string lName, double balance, int account){
    m_fName = fName;
    m_lName = lName;
    m_balance = balance;
    m_accountNum = account;
  }
  int getAccountNum(){return m_accountNum;}
  string getFName(){return m_fName;}
  string getLName(){return m_lName;}
  void setAccountNum(int num){m_accountNum = num;}
  void setFName(string fName){m_fName = fName;}
  void setLName(string lName){m_lName = lName;}
  void printName(){cout << m_fName << " " << m_lName << endl;}
protected:
  double m_balance;
private:
  int m_accountNum;
  string m_fName;
  string m_lName;
};

  



#endif
