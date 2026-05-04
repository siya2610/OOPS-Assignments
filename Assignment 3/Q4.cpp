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
    friend class B;
};
class B{
    public:
    void s(A a){
        cout<<"value is: "<<a.x<<endl;
    }
};

int main(){
    A a;
    B b;
    a.g();
    b.s(a);
    return 0;
}