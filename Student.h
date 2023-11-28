/* Description of Student class
 *
 * This class represents a student entity with a student ID, 
 * a first and last name, and a list of courses they are currently enrolled in.
 *
 * The class allows for a student to view their enrollment information,
 * add a course to their schedule, drop a course, and check if they are 
 * currently registered for a course.
*/

#ifnef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include <string>
#include <unordered_map>

using namespace std;

class Student {
    friend class Course;
    friend class University;
    friend class EnrollmentSystem;

    // prints students information including name, id, and currently enrolled courses
    friend ostream& operator<<(ostream &out, const Student &student);

    private:
        int studentId;
        string firstName;
        string lastName;
        unordered_map<string, Course*> courses;

    public:
        // constructor
        Student(int id, const string &fName, const string &lName);

        // destructor
        ~Student();

        // drops student from given course specified by course number. Returns true if successful
        bool dropCourse(const string &courseNumber);

        // adds student to the given course specified by course number. Returns true if successful
        bool addCourse(const string &courseNumber);

        // returns true if student is in the given course
        bool isInCourse(const string &courseNumber);
};

#endif