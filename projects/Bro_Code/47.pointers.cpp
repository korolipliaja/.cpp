#include <iostream>
using namespace std;

int main(){

/*pointers — - that stores a memory address of another variable
sometimes it's easier to work with an address

& address-of operator
* dereference operator */
    string name = "Dima";
    string *pName = &name;

    string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
//    string *freePizza = &freePizza; (dont need to do this)

    int age = 24;
    int *pAge = &age; 

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *freePizza << '\n';

    return 0;
}