#include <iostream>

using namespace std;

int main(){
    int rows;
    int columns;
    char symbol;

    cout << "enter # of rows: ";
    cin >> rows;
    cout << "enter # of columns: ";
    cin >> columns;
    cout << "enter the symbol: "; 
    cin >> symbol;
    
    
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol;
        }
        cout << '\n';
    }


    return 0;
}