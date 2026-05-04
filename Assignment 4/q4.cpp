#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
    
    float Area(){
        float Area;
        Area = length * breadth;
        return Area;

    }
    Rectangle(int length = 5, int breadth = 10){
        this->length = length;
        this->breadth = breadth;
    }
};

int main(){
    int *i = new int(10);
    
    cout << "integer= " << *i<< endl;
    delete i;

    float *f = new float(5.5);
    
    cout << "float= " << *f << endl;
    delete f;

    
    int *iarr = new int[3]{1, 2, 3};
    
    cout << "integer array: " <<endl;
    
    for (int i = 0; i < 3; i++)
        cout << iarr[i] <<endl;
    delete[] iarr;

    float *farr = new float[2]{1.1, 2.2};
   
    cout << "float array: "<<endl;
    
    for (int i = 0; i < 2; i++){
        cout << farr[i] << endl;
    }
    delete[] farr;

    Rectangle *r = new Rectangle(8, 9);
    cout << "dynamic object area= " << r->Area() << endl;
    delete r;

    Rectangle *rarr = new Rectangle[2]{ Rectangle(2), Rectangle(3, 4) };
    for (int i = 0; i < 2; i++){
        cout << "dynamic array object area= " << rarr[i].Area() << endl;
    }
    delete[] rarr;


}