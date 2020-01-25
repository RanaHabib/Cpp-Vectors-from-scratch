#ifndef ASSIGNMENT3_STUDENT_H
#define ASSIGNMENT3_STUDENT_H

#include "Course.h"
#include "FCIvector.h"

class Student {
private:
    string sName;
    string sDepartment;
    int sID;
    FCIvector<Course> CourseObj;
public:
    void setSName(const string &sName);

    void setSDepartment(const string &sDepartment);

    void setSid(int sId);

    void setCourseObj(const FCIvector<Course> &courseObj);

public:
     Student();

    friend istream &operator>>(istream &in,Student &obj);

    Student(const string &sName, const string &sDepartment, int sId, const FCIvector<Course> &courseObj);

    friend ostream &operator<<(ostream &out,Student &obj);

    void PrintInfo();
};


#endif //ASSIGNMENT3_STUDENT_H
