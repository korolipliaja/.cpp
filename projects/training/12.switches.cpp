#include <iostream>

int main(){

    int month; 
    std::cout << "what it is month now (1)January or (2)February?" << '\n';
    std::cin >> month;
    

    switch(month){
       case 1:
       std::cout << "you are right " << '\n';
        break;    
       case 2: 
       std::cout << "wrong answer" << '\n';
        break; 
       default:
        std::cout << "please enter value from 1 or 2!" << '\n';
    
    }

    return 0;
}