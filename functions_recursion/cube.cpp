#include <iostream>
using namespace std; 

inline double cube(const double side)
{
    return side * side * side;
}

int main()
{
    double sidevalue;
    cout <<"Enter the side length of your cube: ";
    cin >> sidevalue;

    cout << "Volume of cube with side "
        <<sidevalue << " is " << cube(sidevalue) << endl;
}