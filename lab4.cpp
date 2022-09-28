/*****************************************
 ** File:    lab4.cpp
 ** Project: CMSC 202 Lab 4, Fall 2022
 **
 ** Lab 4 involves passing data to void functions by reference and by using poi\
nters.
 **
 ***********************************************/
#include<iostream>
using namespace std;

//Constants (including absolute zeros)

double lowestC = -273.15;
double lowestF = -459.67;

//Function Prototypes for two functions described
void toCelsius (double &temperature);
void toFahrenheit (double *temperature);

int main(){
  double temperature = 0.0; //Input for converting
  int choice = 0; //Menu choice

  cout<<"Welcome to Temperature Conversion tool " <<endl << endl;

  do {
    cout << "Please select below: " << endl;
    cout << "1. Convert from F to C" << endl;
    cout << "2. Convert from C to F" << endl;
    cout << "3. Exit"<< endl;
 cin >> choice;

    //check for validation
    if (choice < 1 || choice > 3) {
      while (choice < 1 || choice > 3) {
        cout << "\nInvalid selection. Please re-enter: " << endl;
        cin >> choice;
      }
    }
    if (choice == 1){
      cout<<"\nTemperature in F: " ;
       cin >> temperature;
      toCelsius(temperature);
      cout << "Temperature in C: " << temperature << endl;
    }

    if (choice == 2){
      cout<<"\nTemperature in C: " ;
      cin >> temperature;
      toFahrenheit(&temperature);
      cout << "Temperature in F: " << temperature << endl;
    }

     cout << endl;

  }while(choice != 3);

  cout << "Have a good one!" << endl;

  return 0;
}

//Write function toCelsius here
//Convert from F to C using pass by reference

void toCelsius (double &temperature){
    temperature = (temperature - 32) * 0.556;
    if (temperature < lowestC) {
        cout << "That is below absolute zero!" << endl;
    } 

}


//Write function toFahrenheit here
//Convert from C to F using pointers

void toFahrenheit (double *temperature){
    *temperature = (*temperature * 1.8) + 32.00;
    if (*temperature < lowestF) {
        cout << "That is below absolute zero!" << endl;
    } 

}
