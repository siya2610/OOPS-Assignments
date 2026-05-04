#include<iostream>
using namespace std;
class Vehicle{
    public:
    string make;
    string model;
    int year;
    void details(){
        cout<<"enter vehicle make: ";
        cin>>make;
        cout<<"enter vehicle model: ";
        cin>>model;
        cout<<"enter vehicle year: ";
        cin>>year;
    }
};
class Truck:public Vehicle{
    public:
    int load;
    void TruckDetails(){
        details();
        cout<<"enter vehicle load capacity: ";
        cin>>load;
    }
};
class RefrigeratedTruck:public Truck{
    public:
    int temp;
    void RefrigeratedTruckDetails(){
        TruckDetails();
        cout<<"enter vehicle temp setting: ";
        cin>>temp;
    }
    void show(){
        cout<<"MAKE: "<<make<<endl;
        cout<<"MODEL : "<<model<<endl;
        cout<<"YEAR : "<<year<<endl;
        cout<<"LOAD CAPACITY : "<<load<<endl;
        cout<<"TEMPERATURE SETTING : "<<temp<<endl;
    }
};
int main(){
    RefrigeratedTruck r;
    r.RefrigeratedTruckDetails();
    r.show();
}