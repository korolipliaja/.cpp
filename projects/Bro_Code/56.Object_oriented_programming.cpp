#include <iostream>

using namespace std;

class Human{
    public:
        string name;    
        string hoby;
        int age;
        
        void eat(){
            cout << "human can eat" << '\n';
        }
        void sleep(){
            cout << "human can sleep" << '\n';
        }
        void run(){
            cout << "human can run" << '\n';
        }
}; 

int main(){
    Human human1;
    Human human2;

    human1.name = "Dima";
    human1.hoby = "enghish";
    human1.age = 24;

    human1.eat();
    human1.sleep(); 
    human1.run(); 

    cout << human1.name << '\n';
    cout << human1.hoby << '\n';
    cout << human1.age << '\n';

    return 0;
}