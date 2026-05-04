#include<iostream>
using namespace std;

class A_Single{
public:
    int x;
};
class B_Single:public A_Single{
public:
    void show(){ 
        cout << "Single inheritance value: " <<x<< endl;
    }
};

class A_Mul{ 
    public:
    int a;
};
class B_Mul{ 
    public: 
    int b; 
};
class C_Mul:public A_Mul,public B_Mul{
public:
    void show(){ 
        cout<<"Multiple inheritance: " << a<<" and "<<b<< endl; 
    }
};
class A_Hier{ 
    public: 
    int s; };
class B_Hier:public A_Hier{

};
class C_Hier:public A_Hier{

};
class A_Level{ 
    public: 
    int p; 
};
class B_Level : public A_Level{ 
    public: 
    int q; 
};
class C_Level : public B_Level{
public:
    void show(){ 
        cout<<"Multilevel: " <<p<<" & "<<q<< endl; 
    }
};
class Base_Hy{ 
    public:
     int h; 
};
class Child1_Hy:virtual public Base_Hy{

};
class Child2_Hy:virtual public Base_Hy{

};
class Derived_Hy:public Child1_Hy,public Child2_Hy{
public:
    void show(){ 
        cout << "Hybrid inheritance value: " <<h<<endl; 
    }
};

int main() {
    int b;
    cout<<"enter a number"<<endl;
    cin>>b;
    B_Single o1;
    o1.x = b;
    o1.show();
    C_Mul o2;
    o2.a = b;
    o2.b = b+ 1;
    o2.show();
    C_Level o3;
    o3.p =b;
    o3.q = b+ 10;
    o3.show();
    Derived_Hy o4;
    o4.h = b;
    o4.show();
}