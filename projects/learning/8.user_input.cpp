#include <iostream>

   int main(){
    
        
        std::string name;
        std::cout << "What is your name?";
        std::cin >> name;
        std::cout << "my name is " << name << '\n';
    
        int age;
        std::cout << "how old are you?";
        std::cin >> age;
        std::cout << " i'm " << age << " years old " << '\n'; 

        std::string mouse;
        std::cout << "what is your mouse?";
        std::getline(std::cin >>std::ws, mouse);

        //getline  it needed to may chance place this line averywhere
        //std::ws (white spaces), need for add a space betweeen words

        std::cout << "my mouse is " << mouse << '\n';

    return 0;
}