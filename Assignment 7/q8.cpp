#include <iostream>
using namespace std;

class Array{
    int a[5];   

public:
    Array(){
        for(int i=0; i< 5; i++)
            a[i] = i* 10;
    }

    int operator[](int index) {
        if(index<0 || index>=5) {
            cout<< "out of bounds"<< endl;
            return -1;   
        }
        return a[index];
    }
};

int main(){
    Array arr;
    cout<< arr[2]<<endl;  
    cout<< arr[7]<<endl;   
    return 0;
}