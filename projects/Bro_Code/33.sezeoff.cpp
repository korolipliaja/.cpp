#include <iostream>

using namespace std;

int main(){

    string name = "Dima";
    bool game = false;
    char symbol = '&'; 
    double price = 5.99;
    int XandY = (10, 11);
    int number = 5;
    string cars[] = {"Lexus", "Nissan", "Toyota", "Honda"};

    cout << sizeof(name) << '\n';
    cout << sizeof(game) << '\n';
    cout << sizeof(symbol) << '\n';
    cout << sizeof(price) << '\n';
    cout << sizeof(XandY) << '\n';
    cout << sizeof(number) << '\n';

    cout << sizeof(cars) << '\n';
    cout << sizeof(cars)/sizeof(string) << " elements" << '\n';



    return 0;
}