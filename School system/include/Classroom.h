#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;



class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Classroom()
    {

    }
    Classroom(int roomNumber , int capacity)
    {
      this->roomNumber=roomNumber;
      this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
      this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
       this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void informations()
    {
        cout<<"Please enter your room number"<<endl;
        cin>>roomNumber;
        cout<<"Please enter capacity"<<endl;
        cin>>capacity;
    }
    void print()
    {
        cout<<"The room number is: "<<roomNumber<<endl;
        cout<<"The capacity class: "<<capacity<<endl;
    }

};

#endif // CLASSROOM_H
