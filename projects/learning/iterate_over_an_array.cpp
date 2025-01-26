#include <iostream>
using namespace std;


int main(){

    string cars[] = {"Honda", "Lexus", "Nissan"};

    for(int i = 0; i < sizeof(cars)/sizeof(string); i++){
        cout << cars[i] << '\n';
    }

    return 0;
}