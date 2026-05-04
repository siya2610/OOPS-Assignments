#include<iostream>
using namespace std;
class Speedometer{
    public:
    int speed;
    void speedc(){
        cout<<"enter speed: "<<endl;
        cin>>speed;
    }
};
class FuelGauge{
    public:
    int fuel;
    void fuelc(){
        cout<<"enter fuel: "<<endl;
        cin>>fuel;
    }
};
class Thermometer{
    public:
    int temp;
    void tempc(){
        cout<<"enter temp: "<<endl;
        cin>>temp;
    }
};
class CarDashboard :public Speedometer,public FuelGauge, public Thermometer{
    public:
    void in(){
        speedc();
        fuelc();
        tempc();
    }
    void show(){
        cout<<"SPEED: " <<speed<<endl;
        cout<<"FUEL: " <<fuel<<endl;
        cout<<"TEMPERATURE: " <<temp<<endl;

    }
};
int main(){
    CarDashboard c;
    c.in();
    c.show();
}