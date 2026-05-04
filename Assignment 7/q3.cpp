#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    // Right-angled triangle
    float area(float base, float height) {
        return 0.5 * base * height;
    }

    // Equilateral triangle
    float area(float side) {
        return (sqrt(3) / 4) * side * side;
    }

    // Isosceles triangle
    float area(float base, float equal_side, int dummy) {
        float height = sqrt(equal_side * equal_side - (base * base) / 4);
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t;

    cout<< "Right-angled triangle area: " << t.area(6,4)<< endl;
    cout<< "Equilateral triangle area: " << t.area(5)<< endl;
    cout<< "Isosceles triangle area: " << t.area(6,5,1)<< endl;

    return 0;
}