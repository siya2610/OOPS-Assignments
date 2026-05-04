#include <iostream>
using namespace std;

class Demo{
public:
    void operator()(int a, int b, int c) {
        cout<< "Values are: "<< a<< " "<< b<< " "<<c <<endl;
    }
};

int main(){
    Demo obj;
    obj(10, 20, 30);  
    return 0;
}