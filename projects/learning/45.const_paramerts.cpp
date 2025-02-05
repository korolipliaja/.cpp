#include <iostream>
using namespace std;

void printInfo(const int &age, const string &name);

int main(){
    int age = 21;
    string name = "Dima";

    printInfo(age, name);

    return 0;
}

/*void printInfo(int age, string name){
    age = 0;
    name = " ";
    cout << age << '\n';
    cout << name << '\n'; 
}*/

void printInfo(const int &age, const string &name){
    cout << age << '\n';
    cout << name << '\n'; 
}