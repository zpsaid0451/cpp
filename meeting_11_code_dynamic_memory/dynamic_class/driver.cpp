#include "Dragon.h"
#include "Haven.h"

int main () {
  Haven newHaven;
  Dragon newDragon("Mr. Fire",5);
  Dragon newDragon2("Ms. Fire", 6);
  Dragon newDragon3("Baby Fire", 3);
  newHaven.addDragon(newDragon);
  newHaven.addDragon(newDragon2);
  newHaven.addDragon(newDragon3);
  cout << newHaven;
  return 0;
}
