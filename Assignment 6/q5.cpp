#include<iostream>
using namespace std;

class Complex{
private:
    int real,imag;

public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    Complex(const Complex &c){
        real=c.real;
        imag=c.imag;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    friend void sum(Complex,Complex);
};

void sum(Complex c1,Complex c2){
    Complex temp(0,0);
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;

    cout<<"Sum = ";
    temp.display();
}
int main(){
    int r1,i1,r2,i2;
    cout<<"Enter the real part of the first complex number: ";
    cin>>r1;
    cout<<"Enter the imaginary part of the first complex number: ";
    cin>>i1;
    cout<<"Enter the real part of the second complex number : ";
    cin>>r2;
    cout<<"Enter the imaginary part of the second complex number : ";
    cin>>i2;

    Complex c1(r1,i1);
    Complex c2(r2,i2);
    sum(c1,c2);
}