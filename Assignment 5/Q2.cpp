#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
};
class Derived: public Base{
    public:
    void num(int num){
        a = num;
        cout<<"Num is "<< num <<endl;
    }
    
};
int main(){
    Derived d;
    int b;
    cout<<"enter a num"<<endl;
    cin>>b;
    d.num(b);
    
}