#include <iostream>
using namespace std;

class String{
    string s;
    public: 
        String(){};
        String(string s1){
            s= s1;
        }
        bool operator==(String s2){
            return (s == s2.s);
        }
        String operator+(String s2){
            String temp;
            temp.s= s+ s2.s;
            return temp;
        }
        void display(){
            cout<< s;
        }
};
int main() {
   String s1("Hello ");
   String s2("World");
   if(s1==s2)
    cout<<"equal strings";
   else
    cout<<"Unequal strings"<<endl;
   String s3= s1+s2;
   s3.display();
   return 0;
}