#include<iostream>
using namespace std;

class Base{
    public:
    int b;
};
class Pub_Derived: public Base{
    public:
    void show(){
        cout<<"b via public:"<<b<<endl;
    }
};
class Pro_Derived: protected Base{
    public:
    void show(){
        cout<<"b via protected:"<<b<<endl;
    }
};
class Pri_Derived: private Base{
    public:
    void show(){
        cout<<"b via private:"<<b<<endl;
    }
};
int main(){
    int b;
    cout<<"enter a num"<<endl;
    cin>>b;
    Pub_Derived p1;
    p1.b = b;
    p1.show();
    Pro_Derived p2;
    p2.b = b;
    p2.show();
    Pri_Derived p3;
    p3.b = b;
    p3.show();

}