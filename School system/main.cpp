#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Staff.h>
#include <Teacher.h>
#include <course.h>
#include <classroom.h>
#include <School.h>


using namespace std;

int main()
{
    School s;
    int x;
  do
  {
    cout<<"Press 0 to Exit"<<endl;
  cout<<"Press 1 to Add student"<<endl;
  cout<<"Press 2 to Add teachers"<<endl;
  cout<<"Press 3 to Add staffs"<<endl;
  cout<<"Press 4 to Add courses"<<endl;
  cout<<"Press 5 to Add class room"<<endl;
  cout<<"Press 6 to Print all students"<<endl;
    cout<<"Press 7 to Print all teachers"<<endl;
      cout<<"Press 8 to Print all staffs"<<endl;
  cout<<"Press 9 to Print all courses"<<endl;
      cout<<"Press 10 to Print all class rooms"<<endl;
      cin>>x;
      system("cls");
      switch(x)
      {
    case 0:
        cout<<"The program is end"<<endl;
        break;
        case 1:
        s.addStudent();
        break;
        case 2:
        s.addTeacher();
        break;
        case 3:
        s.addStaff();
        break;
        case 4:
        s.addCourse();
        break;
        case 5:
        s.addClassRoom();
        break;
        case 6:
        s.printstudents();
        break;
        case 7:
        s.printteachers();
        break;
        case 8:
        s.printstaffs();
        break;
        case 9:
        s.printcourses();
        break;
        case 10:
        s.printclassrooms();
        break;
        default:
            cout<<"Invalid number! press number from(0-10)"<<endl;
            break;
      }

  } while(x!=0);
    return 0;
}
