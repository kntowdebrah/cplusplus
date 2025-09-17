#include <string>
using namespace std; 

class GradeBook
{
public: 
    explicit GradeBook(string);
    void setCourseName(string);
    string getCourseName() const; 
    void displayMessage() const; 
    void inputGrades();
    void displayGradeReport() const;
    int maximum(int, int, int) const; 
private:
    string courseName; 
    int maximumGrade;
};