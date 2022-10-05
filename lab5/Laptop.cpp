#include "Laptop.h"
/**********
* File: Laptop.cpp
*
* Intended for Lab 5: Classes
*
**********/

//Constructor -- Already Implemented
Laptop::Laptop() {
  cout << "Manufacturing a Laptop..." << endl;
}
//Implement Getters here
string Laptop::GetBrand {return m_brand;};
double Laptop::GetPrice {return m_price;};
int Laptop::GetMemory {return m_memory;};
bool Laptop::GetIsBacklit{ return m_isBacklit;};

void Laptop::SetBrand(string brand){m_brand = brand;};
void Laptop::SetPrice(double price){m_price = price;};
void Laptop::SetMemory(int memory){m_memory = memory;};
void Laptop::SetBacklit(bool isBacklit){m_isBacklit = isBacklit;};


// bool Laptop::GetBacklit() {
//   return m_isBacklit;
// }

bool Laptop::WorthIt(){
    if (m_memory >= 8 && m_price < 1000 && m_isBacklit){
        return true;
    }else{
        return false;
    }
}
