#include<iostream>
using namespace std;
class Sample {
public:
    void demo();   
};

void Sample::demo() {
    cout << "Function defined outside the class" << endl;
}

int main() {
    Sample s;
    s.demo();
    return 0;
}
