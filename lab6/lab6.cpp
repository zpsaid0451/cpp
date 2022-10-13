//File: lab6.cpp                                                               \


#include <iostream>
#include <string>
#include <vector>
#include "Groceries.h"
using namespace std;

//COMPLETE THIS FUNCTION                                                       

void fillVector(vector<Groceries> &groceryList){
	int numItem;
	string item;
	double price;
	int quantity;

  // ask for amount of grocery items                                           
	cout << "How many grocery items do you want to add to the list?" << endl;
	cin >> numItem;
  // ask for name, price, quantity of each item and                            
 for (i=0; i<numItem; i++) {
    cout << "Enter name of grocery item # " << i << endl;
	cin >> item;
	cout << "Enter price of grocery item # " << i << endl;
	cin >> price;
	cout << "Enter quantity of grocery item # " << i << endl;
	cin >> quantity;
   Groceries groceryItem = Groceries(item, price,quantity);
	groceryList.push_back(groceryItem);
}
  }
  // add completed grocery item to vector                                      
 

//COMPLETE THIS FUNCTION                                                       

void printVectorWithoutIterator(vector<Groceries> &groceryList){

  // print each item's name, price, and quantity with correct                  
	for (unsigned int i =0; i< groceryList.size();i++){
		cout << groceryList[i].getItem() << " ( " << groceryList[i].getQuantity() << ")" << groceryList[i].getPrice() << endl;
		cout.setf(ios:: fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
	}
  // precision for price                                                       

  // DON'T USE ITERATOR  


//COMPLETE THIS FUNCTION                                                       

void printVectorWithIterator(vector<Groceries> &groceryList){
	for (vector<Groceries>::iterator it = myvector.begin() ; it != myvector.end(); ++it){
		Groceries item = *it;
		cout << item.getItem();
		cout << item.getQuantity();
		cout << item.getPrice() ;
		cout << '\n';
		cout.setf(ios:: fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
	}
  // print each item's name, price, and quantity with correct                  

  // precision for price                                                       

  // USE ITERATOR                                                              


}

void checkStatus(vector<Groceries> &groceryList){

  //DEFINE ENUM HERE BASED ON NAMES BELOW   
  	enum prize {nonMem, bronze, silver};                                   \

  	int listSize = groceryList.size();

	switch (listSize) {
		case nonMem: 
			cout << "You did not purchase enough items to become a member." << endl;
			break;
		case bronze: 
			cout << "You purchased enough items to become a bronze member." << endl;
			break;
		case silver: 
			cout << "You purchased enough items to become a silver member." << endl;
			break;
		default: 
			cout << "You purchased enough items to become a gold member!" << endl;
	}
}

int main(){

  vector<Groceries> groceryList; //Creates a new vector of Groceries

  fillVector(groceryList); //Populates the vector of Groceries
  printVectorWithoutIterator(groceryList); //Displays the contents of the vector
  cout << endl;
  printVectorWithIterator(groceryList); //Alterate way to display the contents of the vector
  checkStatus(groceryList); //calls function defined above (must define enum)

  return 0;
}


