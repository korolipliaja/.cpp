#include <iostream>
using namespace std;

int uImput;
int result;

int main(){
    cout << "enter a number: " << '\n';
    cin >> uImput;

    for(int i = 0; i <= uImput; i++){
        cout << i << '\n';
    }
    result = uImput * uImput;
    cout << result; 
}