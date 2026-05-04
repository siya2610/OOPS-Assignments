#include <iostream>
using namespace std;

template <class T>
class Calc{
    T a, b;

public:
    Calc(T x, T y) {
        a= x;
        b= y;
    }
    void operations() {
        cout<<"Add: "<< a+ b<< endl;
        cout<<"Sub: "<< a- b<< endl;
        cout<<"Mul: "<< a* b<< endl;
        cout<<"Div: "<< a/ b<< endl;
    }
};

int main(){
    Calc<int> c(10, 5);
    c.operations();
    return 0;
}