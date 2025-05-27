#include <iostream>
using namespace std;

class GradeBook 
{
public: 
    explicit GradeBook(std::string); // initialize course
    void setCourseName(std::string); // course name
    string getCourseName() const; 
    void displayMessage() const; 
    void determineClassAverage() const; 
private:
    string courseName;
};