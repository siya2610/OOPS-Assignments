#include<iostream>
using namespace std;
class test{
    int x;
    public:
    void g(){
        cout<<"enter value: "<<endl;
        cin>>x;
    }

    test add(test &t, test &a){
        a.x = x + t.x;
        return a;
    }

    void s(){
        cout<<x<<endl;
    }
};

int main(){
    int n;
    cout<<"enter number of obj: "<<endl;
    cin>>n;

    test t[n];
    test b;

    for (int i = 0; i<n;i++) {
        cout << "object " << i + 1 << endl;
        t[i].g();
    }
    b = t[0];
    for (int i=1;i< n; i++) {
        b = b.add(t[i],b);
    }

    cout << "sum of all objects = ";
    b.s();
    return 0;
}