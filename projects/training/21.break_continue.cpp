#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        if(i == 3){
            break;;
            //continue;
        }
        cout << i << '\n';
    }

    return 0;
}