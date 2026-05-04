#include <iostream>
using namespace std;
int main() {
    int temp_c, temp_f;
    cout<<"Enter temperature in degree celcius: ";
    cin>>temp_c;
    temp_f= ((9*temp_c)/5)+32;
    cout<<"Temperature in degree fahrenheit is: "<<temp_f;
    return 0;
}
