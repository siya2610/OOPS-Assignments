#include<iostream>
using namespace std;

class rectangle{
    float length; 
    float breadth;
public: 
    rectangle(){
        length=0;
        breadth=0;
    }

    rectangle(float breadth){
        this->breadth= breadth;
        length=breadth;
    }

    rectangle(float length, float breadth){
        this-> length= length;
        this-> breadth= breadth;
    }

    float area(){
        int area= length * breadth;
        return area;
    }
};


int main() {
    rectangle x;
    cout<<"area of first rectangle is: "<< x.area()<<endl;
    rectangle y(5);
    cout<<"area of second rectangle is: "<< y.area()<<endl;
    rectangle z(5,10);
    cout<<"area of third rectangle is: "<< z.area()<<endl;
    return 0;
}