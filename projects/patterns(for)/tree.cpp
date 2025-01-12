#include <iostream> 
using namespace std;

int height = 19;

int main(){
    for(int i = 0; i <= height; i++){
        for(int j = 0; j <= height - i; j++){
            cout << " ";
        }
        cout << "*";
        for(int k = 0; k <= i - 1; k++){
            cout << "|";
        }
        for(int j = 0; j <= i; j++){
            cout << "|";
        }
        if(i >= 0){
            cout << "*" << '\n';
        }
    }
    return 0;
}