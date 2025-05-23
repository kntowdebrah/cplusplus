//Gradebook class
#include <iostream>
#include <string> // program uses c++ standard string class
using namespace std; 

//GradeBook class definition
class GradeBook
{
public:
    //function that displays a welcome message to the Gradebook user 
    void displayMessage(string courseName) const 
    {
        cout << "Welcome to the Grade Book for\n" << courseName << "!"
        <<endl; 
    }// end function displayMessage
}; // end class GradeBook

//function main begins program execution
int main()
{
    string nameOfCourse; // course name. 
    GradeBook myGradeBook; 

    //prompt for coursename
    cout<<"Please enter the course name: " <<endl; 
    getline(cin, nameOfCourse);
    cout<<endl; //output a blank line

    //call the gradebook displaymessagefunction
    myGradeBook.displayMessage(nameOfCourse);
}// end main

