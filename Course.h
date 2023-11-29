/** Description of Course Class
 *

This class represents an individual course which students can add to
their list of courses. It consists of course information,
the students taking the course
*
The class includes methods to get the roster by first and last name
and the title of the course as well as add and remove students from the roster
*/
#ifndef COURSE_H
#define COURSE_H

#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

class Student;

class Course
{
    friend class Student;
    friend class University;
    friend class EnrollmentSystem;
    friend ostream &operator<<(ostream &out, const Student &student);

private:
    string courseTitle;
    string courseID;
    vector<Student *> classList;

    // constructor
    Course(int id, const string &title);

    // destructor
    ~Course();

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

    // compares student's last names
    static bool cmpLastName(const Student &student1, const Student &student2);

    // compares student's IDs
    static bool cmpID(const Student &student1, const Student &student2);
};

#endif
