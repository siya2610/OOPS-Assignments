#include<iostream>
using namespace std;
class B;
class A{
private:
    int x;
public:
    A(int a){
        x=a;
    }
    friend int add(A,B);
};
class B{
private:
    int y;
public:
    B(int b){ 
        y=b;
    }
    friend int add(A,B);
};
int add(A a,B b){
    return a.x+b.y;
}
int main(){
    int a,b;
    cout<<"Enter value for A: ";
    cin>>a;
    cout<<"Enter value for B: ";
    cin>>b;
    A obj(a);
    B obj1(b);
    cout<<"Sum = "<<add(obj,obj1);
}