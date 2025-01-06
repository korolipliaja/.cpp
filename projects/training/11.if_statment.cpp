#include <iostream>

    int main(){
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;

        if(age >= 18){
            std::cout << "you will pass :)" << '\n';    
        }
            else{
                std::cout << "must be older!" << '\n';
            }
        
    return 0;
}

