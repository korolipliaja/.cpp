#include <iostream>


int main(){
    double temp;
    char unit;
    std::cout << "Enter the temperature and unit (C or F): ";
    std::cin >> temp >> unit;

    if(temp 'C' || temp 'c'){
        std::cout << temp << 'C' << "is" << temp *1.8 + 32 << 'F' << '\n';


    }


    return 0;
}