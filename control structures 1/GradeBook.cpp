#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std; 

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if(name.size() <= 25)
        courseName = name; 
    else 
    {
        courseName = name.substr(0,25);
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
             << "Limiting courseName to first 25 characters.\n" <<endl;
    }
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage() const 
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl; 
}

void GradeBook::determineClassAverage() const 
{
    //initialize phase
    int total = 0; //sum of grades entered by user 
    unsigned int gradeCounter = 1; // number of grades 

    cout << "Enter grade or -1 to quit: ";
    int grade = 0;
    cin>> grade; 


    //processing phase
    while(grade != -1)
    {
        total = total + grade; //add grade to total 
        gradeCounter++;

        cout<< "Enter grade or -1 to quit: ";
        cin>>grade; 
    }

    if(gradeCounter != 0)
    {
        double average = static_cast<double> (total)/gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is "
            << total << endl; 
        cout << setprecision(2) << fixed;
        cout << "Class average is " << average <<endl;
    }
    else 
    {
         cout << "No grades were entered" << endl; 
    }

}