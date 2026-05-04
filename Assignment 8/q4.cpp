#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int n, T x) {
    for(int i= 0; i< n; i++) {
        if(arr[i]== x) {
            return i;  
        }
    }
    return -1;   
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int x = 30;
    int result= linearSearch(arr, n, x);
    if(result != -1)
        cout<<"Element found at index: " << result;
    else
        cout<<"Element not found";

    return 0;
}