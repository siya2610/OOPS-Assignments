#include<iostream>
using namespace std;

inline int cube(int x) {
    int y;
    y = x * x * x;
    return y;
}

int main() {
    int n;
    cout << "enter no.: ";
    cin >> n;
    cout << "cube: " << cube(n) << endl;
    return 0;
}