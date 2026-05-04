#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int n){
    T min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min= arr[i];
    }
    return min;
}

int main() {
    int arr[5]= {9,2,1,5,7};
    int min= findMin(arr, 5);
    cout<<min;
    return 0;
}