#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n=5;
    int arr[n]= {9,2,1,5,7};
    bubbleSort(arr,5);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}