#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std; 

int main()
{
    double amount; 
    double principal = 1000.0;
    double rate = 0.05;

    cout <<"Year" <<setw(21) <<"Amount on deposit" << endl;

    cout << fixed <<setprecision (2);

    for (unsigned int year = 1; year <= 10; ++year)
    {
        amount = principal * pow(1.0 + rate, year);

        //display the year and the amount
        cout << setw(4) << year << setw(21) << amount << endl;
    }
}