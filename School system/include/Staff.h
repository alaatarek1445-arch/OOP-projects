#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>
using namespace std;


class Staff:public Person
{
private:
    string role;
    float salary;
public:
    Staff()
    {

    }
    staff(string role , float salary)
{
    this->role=role;
    this->salary=salary;
}
void setRole(string role)
{
 this->role=role;
}
void setSalary(float salary)
{
 this->salary=salary;
}
string getRole()
{
    return role;
}
float getSalary()
{
    return salary;
}
void informations()
    {
        Person:informations();
        cout<<"Please enter your role"<<endl;
        cin>>role;
        cout<<"Please enter your salary"<<endl;
        cin>>salary;
    }
    void print()
    {
        Person:print();
        cout<<"The Role is:"<<role<<endl;
        cout<<"The Salary is:"<<salary<<endl;
    }


};

#endif // STAFF_H
