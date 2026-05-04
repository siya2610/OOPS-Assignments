#include <iostream>
using namespace std;

class Polygon{
    protected:
        int width, height;
    public: 
        void set_value(int w, int h){
            width=w;
            height= h;
        }
        virtual void calculate_area()=0;
};

class rectangle: public Polygon{
    int area;
    public:
    void calculate_area(){
        area= width*height;
        cout<<"the area of rectangle is: "<< area<<endl;
    }
};

class triangle: public Polygon{
    int area;
    public:
    void calculate_area(){
        area= (width*height)/2;
        cout<<"The area of triangle is: "<< area<<endl;
    }
};
int main() {
    Polygon *bptr;
    rectangle r;
    r.set_value(5,10);
    bptr= &r ;
    bptr->calculate_area();
    
    triangle t;
    t.set_value(5,10);
    bptr = &t;
    bptr->calculate_area();

    return 0;
}