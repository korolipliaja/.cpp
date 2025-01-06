#include <iostream>
using namespace std;

void WakeUpBoy(string name, int age);

int main(){
    int age = 21;
    string name = "dima ";

    WakeUpBoy(name, age);
   
    return 0;
}

void WakeUpBoy(string name, int age){
    cout << "WAAAKEEEUp " << name << '\n';
    cout << "WAAAKEEEUp " << name << '\n';
    cout << "WAAAKEEEUp " << name << '\n';
    cout << "YOU ALREADY " << age << "YEARS OLD" << '\n';
}