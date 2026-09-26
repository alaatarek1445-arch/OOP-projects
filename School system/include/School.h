#ifndef SCHOOL_H
#define SCHOOL_H
#include<Student.h>
#include<Staff.h>
#include<Teacher.h>
#include<course.h>
#include<classroom.h>
#include<iostream>
using namespace std;


class School
{
   private:
       string schoolName;
       string address;
       string principalName;
       Student students[1000];
       Teacher teachers[50];
       Staff Staffs[50];
       Course Courses[6];
       Classroom Classrooms[50];
       int studentCounter=0;
       int staffCounter=0;
       int teacherCounter=0;
       int courseCounter=0;
       int classRoomCounter=0;

   public:
       School()
       {

       }
       School(string schoolName , string address , string principalName , Student students , Staff Staffs , Course Courses , Teacher teachers , Classroom Classrooms)
       {
      this->schoolName=schoolName;
      this->address=address;
      this->principalName=principalName;
       }
       void addStudent()
       {
         students[studentCounter].informations();
         studentCounter++;
       }
       void addStaff()
       {
           Staffs[staffCounter].informations();
           staffCounter++;
       }
       void addTeacher()
       {
        teachers[teacherCounter].informations();
        teacherCounter++;
       }
       void addCourse()
       {
           Courses[courseCounter].informations();
           courseCounter++;
       }
       void addClassRoom()
       {
           Classrooms[classRoomCounter].informations();
           classRoomCounter++;
       }
       void printstudents()
       {
           for(int i=0; i>studentCounter; i++)
           {
               students[i].print();
               cout<<endl;
           }
       }
       void printteachers()
       {
           for(int i=0; i>teacherCounter; i++)
           {
            teachers[i].print();
            cout<<endl;
           }
       }
        void printstaffs()
       {
           for(int i=0; i>staffCounter; i++)
           {
            Staffs[i].print();
            cout<<endl;
           }
       }
       void printcourses()
       {
           for(int i=0; i>courseCounter; i++)
           {
            Courses[i].print();
            cout<<endl;
           }
       }
        void printclassrooms()
       {
           for(int i=0; i>classRoomCounter; i++)
           {
            Classrooms[i].print();
            cout<<endl;
           }
       }





};

#endif // SCHOOL_H
