#include<iostream>
using namespace std;

class Complex{
    float imagp;
    float realp;

public:

void setComplex(float r,float i){
   realp=r;
   imagp=i;
}
void displayComplex(){
    cout<<realp<< "+" << imagp<< "i";
}

Complex sumComplex(Complex c){
    Complex add;
    add.realp= realp + c.realp;
    add.imagp= imagp + c.imagp;
    return add;
}


};

int main() {
    Complex c1,c2,c3;
    float r,i;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r >> i;
    c1.setComplex(r,i);

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r >> i;
    c2.setComplex(r, i);

    c3 = c1.sumComplex(c2);

    cout << "Sum = ";
    c3.displayComplex();
    
    return 0;
}