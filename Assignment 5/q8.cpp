#include<iostream>
using namespace std;
class LibrarayUser{
    public:
    string name;
    int id;
    int no;
    void details(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter contact number: ";
        cin>>no;
    }
    
};
class Student:public LibrarayUser{
    public:
    int grade;
    void studentDetails(){
        details();
        cout<<"enter grade level: ";
        cin>>grade;
    }
    void show(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Student id: "<<id<<endl;
        cout<<"Student grade level: "<<grade<<endl;
        cout<<"Student contact number: "<<no<<endl;
    }
};
class Teacher:public LibrarayUser{
    public:
    string dept;
    void TeacherDetails(){
        details();
        cout<<"enter department: ";
        cin>>dept;
    }
    void show(){
        cout<<"Teacher name: "<<name<<endl;
        cout<<"Teacher id: "<<id<<endl;
        cout<<"Teacher department: "<<dept<<endl;
        cout<<"Teacher contact number: "<<no<<endl;
    }
};
int main(){
    Student s;
    Teacher t;
    cout<<"Student registration:"<<endl;
    s.studentDetails();
    s.show();
    cout<<"Teacher registration:"<<endl;
    t.TeacherDetails();
    t.show();
}