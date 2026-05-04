#include<iostream>
using namespace std;

class rectangle{
    int l,b;
    public:
    void s(){
        cout<<"enter the value of length"<<endl;
        cin>>l;
        cout<<"enter the value of breadth"<<endl;
        cin>>b;
    }
    void area(){
        cout<<"area = "<<l*b<<endl;
    }
};

int main(){
    int n;
    cout<<"number of rectangles:"<<endl;
    cin>>n;
    rectangle r[n];

    for (int i = 0; i < n; i++) {
        cout << "rectangle " << i + 1 << endl;
        r[i].s();
    }

    cout << "Areas: "<<endl;
    for (int i = 0; i<n; i++){
        r[i].area();
    }
}