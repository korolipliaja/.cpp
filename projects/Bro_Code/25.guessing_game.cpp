#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int num;
    int guess;
    int tries = 0;
    
    cout << "*****Number guessing game*****" << '\n';
    srand(time(NULL));
    num = (rand() % 100) + 1;

    do
    {      
        cout << "Enter the #: " << '\n';
        cin >> guess;
        tries++;

        if(num < guess){
            cout << "MUCH" << '\n';
        }
        else if(num > guess){
            cout << "LESS" << '\n';
        }
        else{
            cout << "CORRECT!!! # of tries: " <<  tries <<'\n';
        }
        
    } while (num != guess);

    return 0;
}