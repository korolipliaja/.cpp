#include <iostream>
using namespace std;

class Shape{
    public: 
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->side = side * side * 6;
        this->side = side * side * side;
    }
};
class Sphere : public Shape{
    public: 
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->radius = 4 * 3.14159 * (radius * radius);
        this->radius = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};
int main(){
    Cube cube(10);
    Sphere sphere(5);

    cout << "Cube area is: " << cube.area << '\n';
    cout << "Cube volume is: " << cube.volume << '\n';

    cout << "Sphere area is: " << sphere.area << '\n';
    cout << "Sphere volume is: " << sphere.volume << '\n';
    return 0;
}