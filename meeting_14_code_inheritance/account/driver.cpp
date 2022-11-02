#include "Account.cpp"
#include "Checking.cpp"
#include "Savings.cpp"

int main () {
  Account newAccount;
  newAccount.setFName("Peregrin");
  newAccount.setLName("Took");
  
  Savings newSavings;
  newSavings.setFName("Samwise");
  newSavings.setLName("Gamgee");
  
  Checking newChecking;
  newChecking.setFName("Albus");
  newChecking.setLName("Dumbledore");
  newChecking.displayTotalInterest();

  Checking newChecking2("Gandolf", "The Gray", 10, .2, 12345);
  
  newAccount.printName();
  newSavings.printName();
  newChecking.printName();
  
  return 0;
}
