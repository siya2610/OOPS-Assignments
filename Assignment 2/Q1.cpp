#include<iostream>
using namespace std;

struct student{
    string name;
    int roll_no;
    string degree;
    string hostel;
    float cgpa;

void addDetails(){
    cout<<"Enter name: ";
    cin>> name;
    cout<<"Enter roll number: ";
    cin>> roll_no;
    cout<<"Enter degree: ";
    cin>> degree;
    cout<<"Enter hostel: ";
    cin>> hostel;
    cout<<"Enter cgpa: ";
    cin>> cgpa;
}
void updateDetails() {
    cout << "Update name: ";
    cin>> name;
    cout << "Update roll_no: ";
    cin >> roll_no;
    cout << "Update degree: ";
    cin >> degree;
}
void updateCGPA() {
    cout << "Enter new CGPA: ";
    cin >> cgpa;
}
void updateHostel() {
    cout << "Enter new hostel: ";
    cin >> hostel;
}
void displayDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll_no << endl;
    cout << "Degree: " << degree << endl;
    cout << "Hostel: " << hostel << endl;
    cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    student s;
    s.addDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    cout<<"The student details are: ";
    s.displayDetails();
    return 0;
}