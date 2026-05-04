#include <iostream>
using namespace std;

class student{
    protected:
    string name;
    int marks;

public:
    void getData(string n, int m) {
        name= n;
        marks= m;
    }
    virtual void display()= 0;
};

class engineering: public student{
    public:
    void display() {
        cout<<"Engineering Student"<<endl;
        cout << "Name: "<<name << ", Marks: " <<marks <<endl;
    }
};

class medical: public student{
    public:
    void display() {
        cout<<"Medical Student"<<endl;
        cout << "Name: "<<name << ", Marks: " <<marks <<endl;
    }
};

class science: public student{
    public:
    void display() {
        cout<<"Science Student"<<endl;
        cout << "Name: "<<name << ", Marks: " <<marks <<endl;
    }
};

int main() {
    student *ptr[3];
    engineering e;
    medical m;
    science s;
    e.getData("Aarushi", 85);
    m.getData("Bansal", 90);
    s.getData("Abc", 88);
    ptr[0] = &e;
    ptr[1] = &m;
    ptr[2] = &s;

    for (int i = 0; i < 3; i++) {
        ptr[i]->display();
        cout << endl;
    }
    return 0;
}