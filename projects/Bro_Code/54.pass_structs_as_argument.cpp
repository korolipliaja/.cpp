#include <iostream>
using namespace std;
struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car car, string color);
//void paintCar(Car &car, string color);

int main(){

    Car car1;
    Car car2;

    car1.model = "Nissan";
    car1.year = 1998;
    car1.color = "Blue";

    car2.model = "Toyota";
    car2.year = 1998;
    car2.color = "White";

    cout << &car1 << '\n';

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(Car &car){
    cout << &car << '\n';
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
}
void paintCar(Car car, string color){
    car.color = color;
}
//void paintCar(Car &car, string color){
//    car.color = color;
//}