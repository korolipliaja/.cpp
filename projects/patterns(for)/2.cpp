#include <iostream> 
using namespace std;

int numbers = 10;
int sum = 0;

int main(){
    for(int i = 1; i <= numbers; i++){
        cout << i << " + ";
        sum = sum + i;
    }
        cout << " = " << sum << '\n';

}