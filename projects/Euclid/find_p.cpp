#include <iostream>
#include <cmath> 
using namespace std;

void rightP(int p);
void pResult(int p);
void rootCondition(int p);

int sum = 0;

int main() {

    int p;

    cout << "Enter a p number from 1 to 127: " << '\n';
    cin >> p;

    rightP(p);
    pResult(p);
    rootCondition(p);

    return 0;
}

void pResult(int p){
    double p1Result = pow (2, p - 1);
    double p2Result = pow (2, p) - 1;
    sum = p1Result * p2Result;
    cout << sum << '\n';
} 

void rightP(int p){
    if (p <= 1 || p % 2 == 0) {
        cout << "p  << must be greater than 1 and not divisible by 2" << '\n';
        exit(0);
    }
}

void rootCondition(int p){

    bool hasDivisor;
    
    while(true){

        double sqrtResult = sqrt(p);
        int roundedResult = round(sqrtResult);


        for(int i = 2; i < roundedResult; i++){
            if(p % i == 0){
                cout << p << " делится на " << i << " без остатка.\n";
                hasDivisor = true; 
                break;
            }
        }

        if(!hasDivisor){
            cout << "Все делители дают остаток (исключая 1 и само число). Завершаем программу.\n";
            break;
        }else{
            cout << "Введите новое число, так как деление без остатка было найдено.\n";
        }
    }
}