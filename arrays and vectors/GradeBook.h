#include <string>
#include <array>

using namespace std; 

class GradeBook
{
public:
    static const size_t students = 10;

    GradeBook(const string &, const array<int, students> &);

    void setCourseName (const string &);
    string getCourseName() const; 
    void displayMessage() const; 
    void processGrades() const; 
    int getMinimum() const; 
    int getMaximum() const; 
    double getAverage() const;
    void outputBarChart() const; 
    void outputGrades() const; 
private:
    string courseName; 
    array<int, students> grades; 
};