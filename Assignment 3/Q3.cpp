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
    friend int add(A  , B );

};
class B{
    int y;
    public:
    void s(){
        cout<<"enter the value"<<endl;
        cin>>y;
    }
    friend int add(A ,B );
};

int add(A a, B b){
    int z ;
    z = a.x + b.y;
    return z;
}
int main(){
    A a;
    B b;
    a.g();
    b.s();
    
    cout<<"sum = "<<add(a,b)<<endl;
    return 0;
}
