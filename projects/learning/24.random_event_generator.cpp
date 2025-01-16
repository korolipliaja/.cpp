#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    int randNum = (rand() % 3) + 1;

    switch(randNum){
        case 1: cout << "11111111";
            break;
        case 2: cout << "22222222";
            break;
        case 3: cout << "33333333";
            break;
    }

    return 0;
}