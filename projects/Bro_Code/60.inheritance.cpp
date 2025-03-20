#include <iostream>

using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "this animal is eat" << '\n';
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "whoaw whoaw whoaw" << '\n';
    }
};
class Cat : public Animal{
    public: 
    void meow(){
        cout << "meow meow meow" << '\n';
    }
};

int main(){
    
    // inheritance - A class can recieve — and methods from another class
    // Children classes inherit from a Parent class
    // Helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    cout << dog.alive << '\n';
    dog.eat();

    cout << cat.alive << '\n';
    cat.eat();

    return 0;
}