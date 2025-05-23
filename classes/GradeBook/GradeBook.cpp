//class uses member functions prototyped in GradeBook.h 

#include <iostream>
#include "GradeBook.h"
using namespace std; 

//constructor initializes coursename 
GradeBook::GradeBook(string name)
{
    setCourseName(name);
};//end Gradebook Constructor 

//function to set the course 
void GradeBook::setCourseName(string name)
{
    if (name.size() <= 25)
    {
        courseName = name; 
    }

    if (name.size()  > 25)
    {
        courseName = name.substr(0, 25);

        cerr << "Name \"" << name << "\" exceeds maximum length (25). \n"
        << "Limiting courseName to first 25 characters. \n" << endl; 
    }
}

//function to get the course name 
string GradeBook::getCourseName() const 
{
    return courseName;
}

//display a welcome message to the GradeBook user 
void GradeBook::displayMessage() const 
{
    //call the getcoursename function 
    cout << "Welcome to the gradebook for\n" << getCourseName() << "!"
        <<endl; 
}

