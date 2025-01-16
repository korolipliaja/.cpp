#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter value A: ";
    std::cin >> a;

    std::cout << "Enter value B: ";
    std::cin >> b;

//    c = pow(a, 2);
//    c = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c << '\n';

    return 0;
}