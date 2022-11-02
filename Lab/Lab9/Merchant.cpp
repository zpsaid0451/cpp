#include "Merchant.h"
#include <string>
using namespace std;

Merchant::Merchant():NPC(){

}

Merchant::Merchant(string name, string description, string dialogue, string wares, double price, int quantity)
	:NPC(name,description,dialogue)   {
		m_wares = wares;
		m_price = price;
		m_quantity = quantity;
	}    



string Merchant:: GetWares() { 
        return m_wares; 
    }
double Merchant::GetPrice() { 
        return m_price; 
    }
int Merchant::GetQuantity() { 
        return m_quantity; 
    }
void Merchant::Sell(){
	int num;
	cout << "How many you want?" << endl;
	cin >> num;
	if (m_quantity > num){
		cout << " purchase success" << endl;
	}else {
		cout << "purchase fails" << endl;
	}
	}
	
// If the merchant’s m_quantity &gt; quantity requested, the purchase fails.
//Note that Sell() is a void function.