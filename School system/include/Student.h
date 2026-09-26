#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
#include <Person.h>


class Student:public Person
{
private:
    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    student(string gradeLevel , float gpa)
    {
      this->gradeLevel=gradeLevel;
      this->gpa=gpa;
    }
    void setGradeLevel(string gradeLevel)
    {
     this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
     this->gpa=gpa;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
    }
    void informations()
    {
        Person:informations();
        cout<<"Please enter your Grade level"<<endl;
        cin>>gradeLevel;
        cout<<"Please enter your Gpa"<<endl;
        cin>>gpa;
    }
    void print()
    {
        Person:print();
        cout<<"The Grade level is:"<<gradeLevel<<endl;
        cout<<"The Grade Gpa is:"<<gpa<<endl;
    }


};

#endif // STUDENT_H
