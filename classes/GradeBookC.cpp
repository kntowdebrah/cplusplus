#include <iostream>
#include <string>
using namespace std; 

//GradeBook class definition
class GradeBook
{
public:
    //function that sets the course name 
    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName() const 
    {
        return courseName; // return the object's courseName
    }// end function getcoursename 

    //function that displays a welcome message
    void displayMessage() const 
    {
        //calls getCourseName 
        cout<< "Welcome to the grade book for\n" << getCourseName() << "!"
            <<endl; 
    }// end function displayMessage
private:
    string courseName; //course name for this gradeoook
}; //end class GradeBook


//function main begins program execution 
int main()
{
    string nameOfCourse; // coursename 
    GradeBook myGradeBook; //creating a gradebook object named mygradebook 

    //display initial value of coursenam e
    cout << "Initial course name is: " << myGradeBook.getCourseName()<<endl; 

    //prompt for, input and set course name 
    cout << "\nPlease enter the course name:" <<endl; 
    getline(cin, nameOfCourse); //read a course name with blanks 
    myGradeBook.setCourseName(nameOfCourse);// sets a coursename 

    cout << endl; //outputs a blank line 
    myGradeBook.displayMessage();
}