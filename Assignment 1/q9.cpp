#include <iostream>
using namespace std;
int main() {
int a, b, c;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter your choice:"<<endl;
    cout << "1: Addition"<<endl;
    cout << "2: Subtraction"<<endl;
    cout << "3: Multiplication"<<endl;
    cout << "4: Division"<<endl;
    cin >> c;

    switch (c) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << a / b; break;
    }

    return 0;
}