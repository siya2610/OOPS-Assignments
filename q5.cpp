#include <iostream>
#include<iomanip>
using namespace std;
int main() {
cout << "Hello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "Hello\bWorld" << endl;
    cout << "Hello" << endl << "World"<<endl;
    cout << setw(10) << "Hello" << setw(10) << "World" << endl;

    return 0;
}