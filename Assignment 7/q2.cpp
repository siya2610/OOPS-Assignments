#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area()=0;
    virtual void display()=0;
};
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void area() {
        cout<< "Area of Circle: " <<3.14* radius* radius<< endl;
    }
    void display() {
        cout<< "Shape: Circle"<<endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length= l;
        breadth= b;
    }
    void area() {
        cout<< "Area of Rectangle: " << length * breadth << endl;
    }

    void display() {
        cout<< "Shape: Rectangle"<<endl;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    void area() {
        cout<< "Area of Triangle: " << (base* height)/ 2 << endl;
    }
    void display() {
        cout << "Shape: Triangle"<<endl;
    }
};

int main() {
    Shape *ptr;
    Circle c(5);
    Rectangle r(10, 4);
    Triangle t(6, 3);
    
    ptr = &c;
    ptr->display();
    ptr->area();
    
    ptr = &r;
    ptr->display();
    ptr->area();

    ptr = &t;
    ptr->display();
    ptr->area();

    return 0;
}