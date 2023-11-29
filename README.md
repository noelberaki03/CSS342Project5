# CSS 342 Project5
The enrollment system is designed to manage student enrollment in courses across multiple universities. 
The system consists of four interconnected classes including Student, Course, University, and EnrollmentSystem.
The Student class stores individual student information and their courses.
The Course class stores information on one course, tracks the class roster, and manages the class list generation.
The University class encapsulates the institution, storing student and course collections,
and provides functions for course management and enrollment checks.
The EnrollentSystem class is the interface for the entire system and manages multiple universities, courses, and students.

Function Descriptions
1. readCourseList
Reads in a text file of courseIDs and course names and stores them as Course objects in the University courseList.
2. readEnrollmentInfo
Reads in a text file of studentID numbers and courseIDs and adds those students to the course objects classList and the corresponding student objects courses.
3. addCourse
Adds a course to a students “courses” list and adds that student object to the Course objects classList.
4. getEnrolledCourses
Returns all of the courseIDs in the student’s “courses” list as a string.
5. getClassListByLastName
Takes in a string courseNumber and looks through the courseList for the corresponding courseID. Finds the course pointer/courseID and compares the student’s last names with cmpLastName to sort alphabetically and stores that into a string to return.
