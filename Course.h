#include "Course.h"
#include <string>
#include <vector>
using namespace std;

class Course
{
private:
    string cName;
    vector<Student *> students;

public:
    friend ostream &operator<<(ostream &out, const Student &student);

    // Drop student from given course, return true if successful
    bool addStudent(int studentID, const string &courseNumber);

    // Add student to the given course, return true if successful
    bool removeStudent(int studentID, const string &courseNumber);

    // Return the title for the course
    string getCourseTitle(const string &courseNumber);

    // Return class list sorted by last name of students
    string getClassListByLastName(const string &courseNumber) const;

    // Return class list sorted by id of students
    string getClassListByID(const string &courseNumber) const;
};