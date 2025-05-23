#ifndef GRADEBOOK_H
#define GRADEBOOK_H
//prototype class with class definition
#include <iostream>
using namespace std; 

//GradeBook class definition 
class GradeBook 
{
public:
    explicit GradeBook(string); //constructor 
    void setCourseName(string);
    string getCourseName() const; 
    void displayMessage() const; 
private:
    string courseName; // for coursename. 
};// end of gradebook class definition
#endif