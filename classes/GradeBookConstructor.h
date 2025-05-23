//Initiating multiple objects of the Gradbookclass using 
//the GradeBook constructor to specifiy the course. 
#include <iostream>
#include <string>
using namespace std; 

//GradeBook class definition 
class GradeBook
{
public:
    //constructor initializes courseName with string supplied as argument 
    explicit GradeBook(string name)
    :courseName(name) // member initializer to initialize courseName
    {
        //empty body 
    }// end GradeBook constructor

    //function to set the course name
    void setCourseName(string name)
    {
        courseName = name; 
    }

    string getCourseName() const 
    {
        return courseName;
    }

    void displayMessage() const 
    {
        cout<< "Welcome to the grade book for\n" << getCourseName() << "!" << endl; 
    }

private:
    string courseName; //coursename

};//end of class