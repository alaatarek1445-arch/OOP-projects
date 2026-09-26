#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>
using namespace std;

class Teacher:public Person
{
private:
    string subject;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(string subject, float salary)
    {
        this->subject=subject;
        this->salary=salary;
    }
    void setSubject(string subject)
    {
        this->subject=subject;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
    }
    void informations()
    {
Person:informations();
        cout<<"Please enter your subject"<<endl;
        cin>>subject;
        cout<<"Please enter your salary"<<endl;
        cin>>salary;
    }
    void print()
    {
Person:
        print();
        cout<<"The subject is:"<<subject<<endl;
        cout<<"The salary is:"<<salary<<endl;
    }
};

#endif // TEACHER_H
