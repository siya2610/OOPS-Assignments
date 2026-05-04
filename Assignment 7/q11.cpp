#include<iostream>
using namespace std;

class Test{
    float value;
public: 
    Test(float x){
        value= x;
    }
    void display(){
        cout<< "Value: "<< value<< endl;
    }
};

int main(){
    float x= 4.5;
    Test t= x;
    t.display();
    return 0;
}