#include<iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    void g(){
        cout<<"enter the value"<<endl;
        cin>>x;
    
    }
    friend void swapV(A & , B &);

};
class B{
    int y;
    public:
    void s(){
        cout<<"enter the value"<<endl;
        cin>>y;
    }
    friend void swapV(A &,B &);
};

void swapV(A &a, B &b){
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout<<"x= "<<a.x<<endl;
    cout<<"y= "<<b.y<<endl;
}
int main(){
    A a;
    B b;
    a.g();
    b.s();
    swapV(a,b);
    return 0;
}
