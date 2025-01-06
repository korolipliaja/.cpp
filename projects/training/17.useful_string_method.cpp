#include <iostream>

int main(){
    std::string name;
    std::cout << "enter your name: " << '\n';
    std::getline(std::cin, name); 

    if(name.length() > 12){
        std::cout << "enter name less of 12 letter!!!" << '\n';
    }
    else{
        std::cout << "your name is : " << name << '\n';
    }


 return 0;   
}