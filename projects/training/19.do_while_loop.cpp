#include <iostream>
//do while loop = do some block of code first,
//                THEN repeat again if condition is true;

int main(){
    int x;

    do{
        std::cout << "enter a number 5 or less";
        std::cin >> x;
    }while(x > 5);
    
    std::cout << "your number is ";

 return 0;   
}