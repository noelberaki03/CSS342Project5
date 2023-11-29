/*
This class represents an individual University in the EnrollmentSystem

It has methods to read in a list of courses, read in a list of students, read in a list of enrollments, add a course and remove a course.
*/
#include <vector>
#include "Student.h"
#include "Course.h"
#include <map>

class University
{
  friend class EnrollmentSystem;

private:
  string name;
  unordered_map<string, Course *> courseList;

  // Constructor for University
  University(string name);

  // Desrtuctor for University
  ~University();

  // Read the student list for current active university
  // return true if file successfully read
  bool readStudentList(const string &filename);

  /**
   * Reads in a text file of courseIDs and course names and
   * stores them as Course objects in the University courseList.
   */
  // Read the course list for current active university
  // return true if file successfully read
  bool readCourseList(const string &filename);

  /**
   * Reads in a text file of studentID numbers and courseIDs
   * and adds those students to the course objects classList
   * and the corresponding student objects courses.
   */
  // Read the student enrollment information for current active university
  // return true if file successfully read
  bool readEnrollmentInfo(const string &filename);

  // Drop student from given course, return true if successful
  bool dropCourse(int studentID, const string &courseNumber);

  /**
   * Adds a course to a students “courses” list and
   * adds that student object to the Course objects classList.
   */
  // Add student to the given course, return true if successful
  bool addCourse(int studentID, const string &courseNumber);

  // Return true if student is in the given course
  bool isInCourse(int studentID, const string &courseNumber) const;

  /**
   * Returns all of the courseIDs in the student’s “courses” list as a string.
   */
  // Return the courses student is enrolled in
  // The returned courses are separated by commas and sorted by course name
  string getEnrolledCourses(int studentID) const;

  // Return the title for the course
  string getCourseTitle(const string &courseNumber);

  /**
   * Takes in a string courseNumber and looks through the courseList
   * for the corresponding courseID. Finds the course pointer/courseID
   * and compares the student’s last names with cmpLastName to sort alphabetically
   * and stores that into a string to return.
   */
  // Return class list sorted by last name of students
  string getClassListByLastName(const string &courseNumber) const;

  // Return class list sorted by id of students
  string getClassListByID(const string &courseNumber) const;
};
