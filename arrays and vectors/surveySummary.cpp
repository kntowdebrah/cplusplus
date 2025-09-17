#include <iostream>
#include <iomanip>
#include <array>
using namespace std; 

int main()
{
    //define array sizes 
    const size_t responseSize = 20; // size of array responses 
    const size_t frequencySize = 6; // size of array frequency 

    //place survey responses in array responses 
    const array<unsigned int, responseSize> responses = {1, 2, 5, 4, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 2, 5};

    //initialize frequency counters to 0
    array<unsigned int, frequencySize> frequency = {};

    for( size_t answer = 0; answer <responses.size(); ++answer)
        ++frequency[responses[answer]];
    
    cout << "Rating" << setw( 17 ) << "Frequency" << endl;

    for(size_t rating= 1; rating < frequency.size(); ++rating)
        cout << setw(6) << rating <<setw(17) << frequency[rating]
            <<endl; 
}