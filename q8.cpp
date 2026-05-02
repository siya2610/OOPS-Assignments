#include <iostream>
using namespace std;
int main() {
    int days;
    float fine;
    cout<<"Enter the number of days you are late: ";
    cin>>days;
    if(days<=5){
        fine= days* 0.5;
        cout<<"Your fine in rupees is: "<<fine;
    }
    else if(days>=6 && days<=10){
        fine= days* 1;
        cout<<"Your fine in rupees is: "<<fine;
    }
    else if(days>=11 && days<=30){
        fine= days* 5;
        cout<<"Your fine in rupees is: "<<fine;
    }
    else if(days>30){
        cout<<"Your membership has been cancelled";
    }
    return 0;
}