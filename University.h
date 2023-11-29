#include <vector>
#include "Student.h"
#include "Course.h"



class University{
  friend class EnrollmentSystem;
  private:
  string name;  

  //Constructor for University 
  University(string name);

  //Desrtuctor for University
  ~University();

  //reads in the student list, returns true if file is read successfully
  bool readStudentList(const string& fileName);

  //reads in the course list returns true if file is read successfully
  bool readCourseList(const string& fileName);

  //reads the current student enrollment info for current active university
  // returns true if file is read successfully
  bool readEnrollmentInfo(const string& fileName);

  //Adds a student to the specified course, return true if successful
  bool addCourse(int studentID, const string& courseNumber);

  //Drops a student to the specified course, return true if successful
  bool dropCourse(int studentID, const string& courseNumber);

};
