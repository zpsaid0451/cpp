#include "Player.h"


//Constructor -- Already Implemented
Player::Player() {
  cout << "Manufacturing a Player..." << endl;
}
//Implement Getters here
string Player::GetBrand {return m_brand;};
double Player::GetPrice {return m_price;};
int Player::GetMemory {return m_memory;};
bool Player::GetIsBacklit{ return m_isBacklit;};

void Player::SetBrand(string brand){m_brand = brand;};
void Player::SetPrice(double price){m_price = price;};
void Player::SetMemory(int memory){m_memory = memory;};
void Player::SetBacklit(bool isBacklit){m_isBacklit = isBacklit;};


// bool Player::GetBacklit() {
//   return m_isBacklit;
// }

bool Player::WorthIt(){
    if (m_memory >= 8 && m_price < 1000 && m_isBacklit){
        return true;
    }else{
        return false;
    }
}
