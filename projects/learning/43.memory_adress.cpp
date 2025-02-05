#include <iostream>
using namespace std;

int main(){

    string name = "Dima";
    int age = 21;
    bool employeer = true;

    cout << name << '\n'; 
    cout << age << '\n'; 
    cout << employeer << '\n'; 

    cout << &name << '\n'; 
    cout << &age << '\n'; 
    cout << &employeer << '\n'; 

    return 0;
}