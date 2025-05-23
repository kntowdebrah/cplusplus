#include <iostream>
using namespace std; 

int main ()
{
    //variable declarations
    int number1 = 0;
    int number2 = 0;
    int sum = 0;

    cout<< "Enter first integer: "; //prompt user for data
    cin>> number1; //read first integer

    cout<< "Enter second integer"; //prompt user for data
    cin>> number2; //read second integer from user 

    sum = number1 + number2;

    cout << "Sum is " << sum << endl; //display sum; end line

}