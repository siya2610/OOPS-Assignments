#include<iostream>
using namespace std;
class Person{
public:
    string name,address;
    void getPerson(){
        cout<< "enter name: ";
        cin>>name;
        cout<< "enter address: ";
        cin>>address;
    }
};
class Staff:virtual public Person{
public:
    int employee_id;
    string dept;
    void getStaff(){
        cout<<"enter employee ID: "; 
        cin>>employee_id;
        cout<<"enter department: "; 
        cin>>dept;
    }
};

class Student:virtual public Person{
public:
    int student_id;
    float grade;
    void getStudent(){
        cout<<"enter student ID: ";
        cin>>student_id;
        cout<<"enter grade: "; 
        cin>>grade;
    }
};
class TeachingAssistant:public Staff, public Student{
public:
    void TA(){
        getPerson(); 
        getStaff();   
        getStudent(); 
    }
    void show() {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Staff ID: "<<employee_id<<endl; 
        cout<<"Student ID: "<<student_id<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<"Dept: "<<dept<<endl;
    }
};
int main() {
    TeachingAssistant t;
    t.TA();
    t.show();
}