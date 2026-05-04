#include <iostream>
using namespace std;

class Test{
    float value;
public:
    Test(float v = 0) {
        value = v;
    }
    operator float() {
        return value;
    }
};

int main(){
    Test t(5.5);
    float x;
    x= t;   
    cout<< "Value: " << x;
    return 0;
}