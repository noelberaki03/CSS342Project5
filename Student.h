#include "Course.h"
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string firstName;
    string lastName;
    int studentID;
    vector<Course *> courses;

public:
    friend ostream &operator<<(ostream &out, const Student &student);

    // Drop student from given course, return true if successful
    bool dropCourse(int studentID, const string &courseNumber);

    // Add student to the given course, return true if successful
    bool addCourse(int studentID, const string &courseNumber);

    // Return true if student is in the given course
    bool isInCourse(int studentID, const string &courseNumber) const;
};