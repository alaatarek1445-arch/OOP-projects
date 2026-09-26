#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;


class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Class()
    {

    }
    Class(string courseCode , string courseName , string teacherName)
    {
      this->courseCode=courseCode;
      this->courseName=courseName;
      this->teacherName=teacherName;
    }
    void setCourseCode(string courseCode)
    {
       this->courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
       this->courseName=courseName;
    }
    void setTeacherName(string teacherName)
    {
       this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void informations()
    {
        cout<<"Please enter your course Code"<<endl;
        cin>>courseCode;
        cout<<"Please enter your course Name"<<endl;
        cin>>courseName;
        cout<<"Please enter your Teacher Name"<<endl;
        cin>>teacherName;
    }
    void print()
    {
        cout<<"The course code is"<<courseCode<<endl;
        cout<<"The course name is"<<courseName<<endl;
        cout<<"The teacher name is"<<teacherName<<endl;
    }



};

#endif // CLASS_H
