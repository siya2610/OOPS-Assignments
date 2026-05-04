#include<iostream>
using namespace std;

namespace a1 {
    int x = 5;
    void print() {
        cout << "First namespace x = " << x << endl;
    }
}

namespace a2 {
    int x = 15;
    void print() {
        cout << "Second namespace x = " << x << endl;
    }
}

int main() {
    a1::print();
    a2::print();
    return 0;
}