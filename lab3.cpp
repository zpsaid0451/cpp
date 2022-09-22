/*****************************************
** File:    lab3.cpp
** Project: CMSC 202 Lab 3, Fall 2022
**
** Lab 3 involves using arrays. In this file you need to
** implement the flipArray() function as well as populate the array
** and keep track of the length of the array.
**
***********************************************/
#include <iostream>
using namespace std;

// Function Prototype for flipArray HERE********
void flipArray(int array[], int size); //Provided

//Implement global constants HERE********
const int NUM_NUMBERS = 100;

int main () {  
int nums;
int numsArray[NUM_NUMBERS];
int size = 0;

cout << "Enter a number (0 when done):\n";
cin >> nums;
while(nums != 0 ){
      numsArray[size] = nums;
      size++;
      cout << "Enter a number (0 when done):\n";
     
      cin >> nums;
    
}
cout << "Original Array:";
for (int i = 0; i < size; ++i) //loops for each NUM_NUMBERS
    {
        cout << numsArray[i] << " ";
        // 
       
    }
// cout << "Original Array:\n" << numsArray[NUM_NUMBERS] ;

cout << " Flipped Array:";
flipArray(numsArray, size);

for (int i = 0; i < size; ++i) //loops for each NUM_NUMBERS
    {
        cout << numsArray[size-1-i] << " ";
        // 
       
    }
return 0;
}


void flipArray(int numsArray[], int size){ 

for (int i = 0; i < size; ++i) //loops for each NUM_NUMBERS
{

  int temp = numsArray[i];
    numsArray[i] = numsArray[size-1-i];
    numsArray[size-1-i] = temp;  
}


}










//Implement main HERE*********


// Declare your necessary variables.




// Populate your array.



// Display the original array, call flipArray(), display modified array.








// Implement flipArray() here
// Hint: only need to iterate through half of the array.

