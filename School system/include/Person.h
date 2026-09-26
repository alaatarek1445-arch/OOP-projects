#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;




class Person
{
private:
    string name;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int age;
    int id;
public:
    Person()
    {

    }
    Person(string name , string gender , string address , string phoneNumber , string email , int age , int id)
    {
      this->name=name;
      this->gender=gender;
      this->address=address;
      this->phoneNumber=phoneNumber;
      this->email=email;
      this->age=age;
      this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setGender(string gender)
    {
       this->gender=gender;
    }
    void setAddress(string address)
    {
      this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
      this->phoneNumber=phoneNumber;
    }
    void setEmail(string email)
    {
      this->email=email;
    }
    void setAge(int age)
    {
      this->age=age;
    }
    void setId(int id)
    {
      this->id=id;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getphoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getAge()
    {
        return age;
    }
    int getId()
    {
        return id;
    }
    void informations()
    {
        cout<<"Please enter your name"<<endl;
        cin>>name;
        cout<<"please enter your gender"<<endl;
        cin>>gender;
        cout<<"please enter your address"<<endl;
        cin>>address;
        cout<<"please enter your phone number"<<endl;
        cin>>phoneNumber;
        cout<<"please enter your email"<<endl;
        cin>>email;
        cout<<"please enter your age"<<endl;
        cin>>age;
        cout<<"please enter your id"<<endl;
        cin>>id;
    }
    void print()
    {
        cout<<"The name is:"<<name<<endl;
        cout<<"The gender is:"<<gender<<endl;
        cout<<"The address is:"<<address<<endl;
        cout<<"The phone number is:"<<phoneNumber<<endl;
        cout<<"The email is:"<<email<<endl;
        cout<<"The age is:"<<age<<endl;
        cout<<"The id is:"<<id<<endl;

    }
};

#endif // PERSON_H
