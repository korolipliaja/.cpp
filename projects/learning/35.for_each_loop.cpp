#include <iostream>
using namespace std;


int main(){

    string cars[] = {"Honda", "Toyota", "Nissan"};
    int grades[] = {1, 2, 3, 4, 5};
    int num = 10;
    
// Same things but a short
    for(int i = 0; i < sizeof(cars)/sizeof(string); i++){
        cout << cars[i] << '\n';
    }

    for(string cars : cars){
        cout << cars << '\n';
    }

    for(int i = 0; i < num + 1; i++){
        cout << i << '\n'; 
    }

    return 0;
}