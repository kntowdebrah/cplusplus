#include <string>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
    explicit GradeBook(string); 
    void setCourseName(string);
    void displayMessage() const;
    string getCourseName() const;
    void inputGrades();
    void displayGradeReport() const;
    
private:
    string courseName;// name of course
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
};