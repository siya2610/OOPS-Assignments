#include <iostream>
using namespace std;

template <class T>
class Array{
    T arr[5];
public:
    void input(){
        cout<<"Enter 5 elements:"<<endl;
        for(int i= 0; i< 5; i++)
            cin>> arr[i];
    }
    void display(){
        cout<< "Array elements: ";
        for(int i = 0; i < 5; i++)
            cout<< arr[i]<< " ";
    }
};

int main() {
    Array<int> a;
    a.input();
    a.display();
    return 0;
}