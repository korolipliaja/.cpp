#include <iostream> 
using namespace std;

int h = 10;

int main(){
    for(int i = 0; i <= h; i++){
        for(int j = 0; j < h - i; j++){
            cout << " ";
        }
        cout << "*";
        for(int k = 0; k <= i - 1; k++){
            cout << "|";
        }
        for(int j = 1; j < i; j++){
            cout << "|";
        }
        if(i > 0){
            cout << "*" << '\n';
        }
    }


    return 0;
}