#include <iostream>
using namespace std;

int main(){
    double temp;
    char unit;
    std::cout << "Enter the unit to convert C or F" << '\n';
    std::cin >> unit;

    if(unit == 'C' || unit == 'c'){
        cout << "Enter the temp in Celsius: "; 
        cin >> temp;
        temp = (1.8 * temp) + 32.0;
        cout << "The temp is: " << temp <<  "F\n";
    }

    if(unit == 'F' || unit == 'f'){
        cout << "Enter the temp in Fahrenheit "; 
        cin >> temp;
        temp = (temp - 32) / 1.8; 
        cout << "The temp is: " << temp <<  "C\n";
    }
    else{
        cout << "Enter value only in C or F";
    }

    return 0;
}