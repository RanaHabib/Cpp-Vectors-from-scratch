#ifndef ASSIGNMENT3_COURSE_H
#define ASSIGNMENT3_COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string CourseName;
    string CourseCode;
    char CourseGrade;
    float CoursePoint;
    int CourseYear;
    int CourseSemester;

public:
    Course();

    Course(const string &courseName, const string &courseCode, char courseGrade, float coursePoint, int courseYear,
           int courseSemester);

    friend istream &operator>>(istream &in,Course &obj);

    friend ostream &operator<<(ostream &out,Course &obj);


};


#endif //ASSIGNMENT3_COURSE_H
