/*
This in the main class that manages all of the enrollment information for all the University
objects by selecting a specific university and managing its courses and students.


*/
#include "University.h"

using namespace std;

class EnrollmentSystem
{
private:
    vector<University *> universities;

public:
    // constructor
    EnrollmentSystem();

    // deconstructor
    ~EnrollmentSystem();

    // Add university to the enrollments system
    bool addUniversity(const string &name);

    // Set this university as the active university for other functions
    bool setCurrentUniversity(const string &name);

    // Return the current active university name
    string getUniversityName() const;
};
