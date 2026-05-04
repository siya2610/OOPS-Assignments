#include <iostream>
using namespace std;

template <typename T>
void process(T a) {
    cout<< "Single parameter: "<<a <<endl;
}

template <typename T>
void process(T a, T b) {
    cout<< "Same type parameters: "<<a <<" " <<b <<endl;
}

template <typename T, typename U>
void process(T a, U b) {
    cout<< "Different type parameters: "<<a << " " <<b <<endl;
}

int main(){
    process(10);         
    process(10, 20);      
    process(10, 5.5);     

    return 0;
}