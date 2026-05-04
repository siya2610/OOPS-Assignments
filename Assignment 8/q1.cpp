#include <iostream>
using namespace std;

template <typename T>
void swapval(T &n1, T &n2){
    T n3;
    n3= n1;
    n1= n2;
    n2= n3;
}
int main() {
    int n1=2;
    int n2=5;
    swapval(n1,n2);
    cout<<"After swapping: "<<n1 <<endl <<n2;
    return 0;
}