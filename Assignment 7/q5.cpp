#include <iostream>
using namespace std;

class Time{
    int h,m,s;
    public: 
        Time (int hh=0, int mm=0, int ss=0){
            h= hh;
            s= ss;
            m= mm;
        }
        Time operator+(Time t){
            Time temp;
            temp.s= s+ t.s;
            temp.m= m+ t.m+ temp.s/60;
            temp.s= temp.s% 60;
            temp.h= h+ t.h+ temp.m / 60;
            temp.m= temp.m% 60;
            return temp;
        }
        void display() {
        cout << h << ":" << m << ":" << s;
        }
};
int main() {
   Time t1(5,15,34), t2(9,53,58);
   Time t3= t1+t2;
   t3.display();
    return 0;
}