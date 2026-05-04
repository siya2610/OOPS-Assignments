#include <iostream>
using namespace std;

template<class T, class U>
class Pair {
    T a;
    U b;

public:
    Pair(T x, U y) {
        a= x;
        b= y;
    }

    void display() {
        cout<< "Values: "<< a<< " "<< b<< endl;
    }
};

int main(){
    Pair<int, float> p(5, 2.5);
    p.display();
    return 0;
}