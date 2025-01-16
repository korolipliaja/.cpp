#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int num = (rand() % 5) + 1;
    cout << num << '\n';

    return 0;
}

