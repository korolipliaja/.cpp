#include <iostream>

// && mean "and" check if two conditions is true
// || mean "or" at least on of two conditions is true 
// ! man "not" reverse the loghical of its operand 

int main(){
    int temperature = 40;
    bool sunny = true;

    if(temperature > 0 && temperature < 30){

        std::cout << "good" << '\n';
    } 
    else{
        std::cout << "isn't good" << '\n'; 
    }
    if (sunny){
        std::cout << "sunny outside" << '\n'; 
    }
    else{
        std::cout << "isn't sunny outside" << '\n'; 
    }

    return 0;
}