#include <iostream>

using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;
    Pizza(){

    }
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){
    Pizza pizza1("peperoni");
    Pizza pizza2("cheeze", "spicy");
    Pizza pizza3;

    /*cout << pizza1.topping1 << '\n';
      cout << pizza2.topping2 << '\n'; */

    return 0;
}