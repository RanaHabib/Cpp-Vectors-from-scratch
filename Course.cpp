
#include "Course.h"

Course::Course() {}


Course::Course(const string &courseName, const string &courseCode, char courseGrade, float coursePoint, int courseYear,
               int courseSemester) : CourseName(courseName), CourseCode(courseCode), CourseGrade(courseGrade),
                                     CoursePoint(coursePoint), CourseYear(courseYear), CourseSemester(courseSemester) {}


istream &operator>>(istream &in, Course &obj) {
    cout<<"Course name: ";
    in>>obj.CourseName;
    cout<<"Course Code: ";
    in>>obj.CourseCode;
    cout<<"Course Grade: ";
    in>>obj.CourseGrade;
    cout<<"Course Point: ";
    in>>obj.CoursePoint;
    cout<<"Course Year: ";
    in>>obj.CourseYear;
    cout<<"Course Semester: ";
    in>>obj.CourseSemester;


    return in;
}

ostream &operator<<(ostream &out, Course &obj) {
    out<<"Course name: "<<obj.CourseName<<endl;
    out<<"Course Code: "<<obj.CourseCode<<endl;
    out<<"Course Grade: "<<obj.CourseGrade<<endl;
    out<<"Course Point: "<<obj.CoursePoint<<endl;
    out<<"Course Year: "<<obj.CourseYear<<endl;
    out<<"Course Semester: "<<obj.CourseSemester<<endl;

    return out;
}
