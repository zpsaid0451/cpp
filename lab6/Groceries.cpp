#include "Groceries.h"

Groceries::Groceries() {
	m_item = "Tomato";
	m_price = 5.00;
	m_quantity = 2;
}

//Overloaded Constructor for Classes
Groceries::Groceries(string item, double price, int quantity){
	m_item = item; 
	m_price = price; 
	m_quantity = quantity;

}
//Name: setItem
//Sets what the item is
void Groceries::setItem(string item){
m_item = item;
}
//Name setPrice
//Sets the price for one item
void Groceries::setPrice(double price){m_price = price;}
//Name: setQuantity
//Sets the quantity of the grocery item to be purchased
void Groceries::setQuantity(int quantity){
m_quantity = quantity; 
}
//Name: getItem
//Returns the name of the item
string Groceries::getItem(){
return m_item;
}
//Name: getPrice
//Returns the price of the item
double Groceries::getPrice(){
return m_price;
}
//Name: getQuantity
//Returns the quantity of the grocery item
int Groceries::getQuantity(){
return m_quantity;
}