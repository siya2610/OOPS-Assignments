#include<iostream>
#include<fstream>
using namespace std;

class Student{
    char name[20];
    int age;
    int roll_no;
    public:
        void input(){
            cout<<"Enter name:"; cin>>name; 
            cout<<"Enter roll no:"; cin>>roll_no;
            cout<<"Enter age:"; cin>>age;
        }
        void display(){
            cout<<name<<endl <<roll_no<<endl <<age<<endl;
        }
};
int main(){
    Student s;
    s.input();
    ofstream fout("stud.dat", ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();
    Student s1;
    ifstream fin("stu.dat", ios::binary);
    fin.read((char*)&s1, sizeof(s1));
    fin.close();
    s1.display();
}