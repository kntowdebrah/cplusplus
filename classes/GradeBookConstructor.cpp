//using GradeBookConstructor.h
//function main begins program execution 

#include <iostream>
#include "GradeBookConstructor.h"
using namespace std;

int main()
{
    //create two Gradebook objects
    GradeBook gradebook1("CS101 Introduction to C++ Programming");
    GradeBook gradebook2("CS102 Data Structures in C++");

    //display intial value of coursename for each gradebook
    cout<< "gradeBook1 created for course: " <<gradebook1.getCourseName()
        << "\ngradeBook2 created for course: " <<gradebook2.getCourseName()
        <<endl;
} //end main