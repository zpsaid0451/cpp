#include<iostream>
#include <string>
#include <cstring>
using namespace std;

double sumOfDoubles(); //Function Prototype
void greaterThanTwenty(double x);


int main () {  
greaterThanTwenty(sumOfDoubles());
return 0;
}


double sumOfDoubles(){ //Header
int numTimes;
double firstNum;
int time =0;
double enterNum;
double result = 0.0;
cout << "How many number you wanna add?\n";
cin >> numTimes;
while(cin.fail()){
      cout << "Please enter valid double number!\n";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> numTimes;
    }
while (time < numTimes ){
 cout << "Please add double number \n";
 cin >> enterNum;
 result = enterNum + result;
 time = time+1;
}
cout << "The result is " << result << endl;
return result;
}


void greaterThanTwenty(double x){
    if (x > 20.0) {
        cout << "It is greater than 20\n";
    } else {
        cout << "It is less than 20\n";
    }
}