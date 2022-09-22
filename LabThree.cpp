#include <iostream>
using namespace std;

// Function Prototype for flipArray HERE********
// void flipArray(int array[], int size); //Provided

//Implement global constants HERE********
const int NUM_NUMBERS = 100;

int main () {  
int nums;
int numsArray[NUM_NUMBERS];
int i = 0;

cout << "Enter a number (0 when done):\n";
cin >> nums;
while(nums != 0 and cin.fail()){
      cout << "Enter a number (0 when done):\n";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> nums;
      numsArray[i] = nums;
      i++;
}
for (int i = 0; i < NUM_NUMBERS; ++i) //loops for each NUM_NUMBERS
    {
        cout << numsArray[i]; //stores input in array
       
    }
// cout << "Original Array:\n" << numsArray[NUM_NUMBERS] ;
// flipArray();

return 0;
}


int main() 
{
    int numbers[NUM_NUMBERS]; //declares a new array of size 5
	int sum = 0; //declares and initializes a new integer variable
    cout << "Enter " << NUM_NUMBERS << " numbers: "; //requests user input
    
    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i < NUM_NUMBERS; ++i) //loops for each NUM_NUMBERS
    {
        cin >> numbers[i]; //stores input in array
        sum += numbers[i]; //aggregates input in variable
    }
    
    cout << "Sum = " << sum << endl;  //console output the sum  
    return 0;
}

// void flipArray(int array