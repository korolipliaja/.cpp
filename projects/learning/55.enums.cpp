#include <iostream>
using namespace std;

enum Day {sunday, monday, tuesday};

int main(){
    //  enums - a user-defined data type that consists
    //  of paired named-integer constants.
    //  great if you have a set of potential options

    Day today = monday;
    switch(today){
        case sunday : cout << "it is sunday" << '\n';
        break;
        case monday : cout << "it is monday" << '\n';
        break;
        case tuesday : cout << "it is tuesday" << '\n';
        break;
    }
    return 0;
}