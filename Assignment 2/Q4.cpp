#include<iostream>
using namespace std;

class rectangle{
private:
    int width;
    int height;
public:
void getData(){
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"Enter the height: ";
    cin>>height;
}
void calculateArea(){
    int area= width*height;
    cout<<"The area of the rectangle is: "<<area;
}
};
int main() {
    rectangle a;
    a.getData();
    a.calculateArea();
    return 0;
}