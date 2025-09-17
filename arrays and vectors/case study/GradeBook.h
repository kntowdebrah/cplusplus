#include <array>
#include <string>

using namespace std;

class GradeBook 
{
public:
    static const size_t students = 10; // number of students
    static const size_t tests = 3; // number of tests 

    GradeBook(const string & , array<array<int, tests>, students> &);
    void setCourseName(const string &);
    string getCourseName() const; 
    void displayMessage() const; 
    void processGrades() const; 
    int getMinimum() const; 
    int getMaximum() const;
    double getAverage( const array<int,tests> &) const; 
    void outputBarChart() const; 
    void outputGrades() const; 
private: 
    string courseName;
    array<array<int,tests>, students> grades; 
};