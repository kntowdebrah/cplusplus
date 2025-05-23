//this source code tests the GradeBook class 
#include <iostream>
#include "GradeBook.h"
using namespace std; 

//function main begins program execution 
int main()
{
    //create two GradeBook objects 
    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 Data Structures");

    //display initial value of courseName for each GradeBook
    cout <<"gradeBook1's initial course name is: "<<gradeBook1.getCourseName() 
    <<"\ngradeBook2 initial course name is: " <<gradeBook2.getCourseName() 
    <<endl; 

    //modify gradeBook1's courseName (with a valid-length string)
    gradeBook1.setCourseName("CS101 C++ Programming");

    //display each GradeBook's courseName
    cout << "\ngradeBook1's course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's course name is: "
        << gradeBook2.getCourseName() << endl;
}//end main