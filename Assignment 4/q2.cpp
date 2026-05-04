#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
    
    float Area(){
        float A;
        A = length * breadth;
        return A;

    }
    Rectangle(int length = 5, int breadth = 10){
        this->length = length;
        this->breadth = breadth;
    }
    ~Rectangle(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    
    Rectangle arr[3] =  { Rectangle(), Rectangle (10), Rectangle (10,30)};

    for (int i = 0; i<3; i++){
        cout<<"The area of the rectangle is " << arr[i].Area()<<endl;
    }
return 0;

}