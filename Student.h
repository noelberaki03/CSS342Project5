/* Description of Student class
 *
 * This class represents a student entity with a student ID,
 * a first and last name, and a list of courses they are currently enrolled in.
 *
 * The class allows for a student to view their enrollment information,
 * add a course to their schedule, drop a course, and check if they are
 * currently registered for a course.
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <map>

using namespace std;

class Course;

class Student
{
    friend class Course;
    friend class University;

    // prints students information including name, id, and currently enrolled courses
    friend ostream &operator<<(ostream &out, const Student &student);

private:
    int studentId;
    string firstName;
    string lastName;
    map<string, Course *> courses;

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

    // Return the courses student is enrolled in
    // The returned courses are separated by commas and sorted by course name
    string getEnrolledCourses(int studentID) const;
};

#endif
