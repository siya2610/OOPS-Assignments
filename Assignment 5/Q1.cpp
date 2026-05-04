#include<iostream>
#include<string>
using namespace std;

class Base{
    public:
    void greet(){
        cout<<"Base"<<endl;

    }
};
class Derived: public Base{
    public:
    void ans(){
        cout<<"Derived"<<endl;
    }
};
int main(){
    Base b;
    Derived d;
    b.greet();
    d.greet();
    d.ans();
}