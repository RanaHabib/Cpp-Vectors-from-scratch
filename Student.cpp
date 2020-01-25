
//Student::Student() {}

#include "Student.h"
#include "FCIvector.cpp"

Student::Student() {

}

void Student::PrintInfo() {

}

istream &operator>>(istream &in, Student &obj) {
    cout<<"Student name: ";
    in>>obj.sName;
    cout<<"Student ID: ";
    in>>obj.sID;
    cout<<"Student Department: ";
    in>>obj.sDepartment;
    cout<<"Number of Courses: ";
    int n=0;
    in>>n;
    while(n--){
        cout<<"Enter Course #"<<n<<" info\n";
        Course c;
        in>>c;
       //in>>obj.CourseObj[n];
        obj.CourseObj.push_back(c);
    }
    return in;
}

ostream &operator<<(ostream &out, Student &obj) {

    out<<"Student name: "<<obj.sName<<endl;
    out<<"Student Department: "<<obj.sDepartment<<endl;
    out<<"Student ID: "<<obj.sID<<endl;

    for(int i = 0 ; i< obj.CourseObj.size(); i++){
        out<<"-----Course Number# "<<i<<"-----\n";
        out<<obj.CourseObj[i];
    }
    return out;
}

Student::Student(const string &sName, const string &sDepartment, int sId, const FCIvector<Course> &courseObj) : sName(
        sName), sDepartment(sDepartment), sID(sId), CourseObj(courseObj) {}

void Student::setSName(const string &sName) {
    Student::sName = sName;
}

void Student::setSDepartment(const string &sDepartment) {
    Student::sDepartment = sDepartment;
}

void Student::setSid(int sId) {
    sID = sId;
}

void Student::setCourseObj(const FCIvector<Course> &courseObj) {
    CourseObj = courseObj;
}


