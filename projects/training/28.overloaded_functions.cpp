#include <iostream>
using namespace std;

void pizza(string topping1);
void pizza(string topping1, string topping2);

void pizza();

int main(){
    pizza("mashroms ", "cheeze ");
    return 0;
}

void pizza(){
    cout << "Your pizza\n";
}

void pizza(string topping1){
    cout << "Your pizza with " << topping1 << '\n';
}

void pizza(string topping1, string topping2){
    cout << "Your pizza with " << topping1 << "and " << topping2 << '\n';
}