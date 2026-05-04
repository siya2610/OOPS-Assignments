#include <iostream>
using namespace std;

template <class T>
class Stack{
    T arr[5];
    int top;

public:
    Stack(){top = -1;}
    void push(T x) {
        if(top== 4) 
            cout<< "Stack Overflow";
        else 
            arr[top+1] = x;
    }

    void pop() {
        if(top== -1) 
            cout<<"Stack Underflow ";
        else 
            cout<<"Popped: " << arr[top--] << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    return 0;
}