//Title: lab5.cpp
//Desc: To complete the DisplayDetails and GoodValue functions

#include <iostream>
#include <string>
#include "Laptop.h"
using namespace std;

//Write the functions DisplayDetails and GoodValue here
void DisplayDetails(Laptop device);
void GoodValue(Laptop device);

int main() {
  Laptop Laptop1; //Creates a new laptop
  Laptop Laptop2; //Creates a new laptop
  cout << endl;

  Laptop1.SetBrand("Apple"); //Calls the SetBrand to populate the m_brand
  Laptop1.SetPrice(2300); //Calls the SetPrice to populate the m_price
  Laptop1.SetMemory(16); //Calls the SetMemory to populate the m_memory
  Laptop1.SetBacklit(true); //Calls the SetBacklit to populate the m_isBacklit

  Laptop2.SetBrand("Lenovo"); //Calls the SetBrand to populate the m_brand
  Laptop2.SetPrice(899); //Calls the SetPrice to populate the m_price
  Laptop2.SetMemory(16); //Calls the SetMemory to populate the m_memory
  Laptop2.SetBacklit(true); //Calls the SetBacklit to populate the m_isBacklit

  DisplayDetails(Laptop1); //Calls the function DisplayDetails (in lab5.cpp)
  DisplayDetails(Laptop2); //Calls the function DisplayDetails (in lab5.cpp)

 GoodValue(Laptop1); //Calls the function GoodValue (in lab5.cpp)
  GoodValue(Laptop2); //Calls the function GoodValue (in lab5.cpp)

  return 0;
}

//Implement DisplayDetails here

void DisplayDetails(Laptop device){
  cout << "Laptop Brand:" << device.GetBrand() << endl;
  cout << "Cost:" <<device.GetPrice() << endl;
  cout << "RAM:" << device.GetMemory() << endl;
  if (device.GetIsBacklit()){
    cout << "Backlit Keyboard: Yes" << endl;
  }else {
    cout << "Backlit Keyboard: No" << endl;
  }

}


//Implement GoodValue here
void GoodValue(Laptop device){
    if (device.WorthIt()){
        cout << "This laptop is totally worth it!" << endl;
    } else {
        cout << "This laptop is totally not worth it!" << endl;
    }
}