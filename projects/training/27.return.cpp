#include <iostream>

double arealine(double line);
double cubeline(double lineC);

using namespace std;

int main(){

    double line = 6.1;
    double result = arealine(line);
    double lineC = 6.1;
    double resultC = cubeline(lineC);

    cout << "Area is: " << result << "cm^2\n"; 
    cout << "Cube is: " << resultC << "cm^3\n"; 
    return 0;
}

double arealine(double line){
    return line * line;
}

double cubeline(double lineC){
    return lineC * lineC * lineC; 
}