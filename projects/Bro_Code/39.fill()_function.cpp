#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    const int SIZE = 100;
    
    string foods[SIZE];

    fill(foods, foods + SIZE, "pizza");

    for(string food : foods){
        cout << food << '\n';
    }

    return 0;
}