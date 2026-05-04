#include<iostream>
using namespace std;
int x = 20;   

int main() {
    int x = 80;   

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;

    return 0;
}
