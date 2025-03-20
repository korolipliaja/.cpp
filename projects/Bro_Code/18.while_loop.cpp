#include <iostream>

// while loop make same as if but if (f) is true block of code will be repeated
/*int main(){
    std::string name;
    if(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
        std::cout << "your name is: " << name;
    }
 return 0;   
} this function do not work if writing nothing, in this case we need to use while*/

int main(){
    
    std::string name;

    while(name.empty()){
    std::cout << "enter your name: " << '\n';
    std::getline(std::cin, name);
    
    }
    
    std::cout << "your name is : " << name << '\n';


    return 0;
}