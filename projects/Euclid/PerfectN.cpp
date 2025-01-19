#include <iostream>
#include <cmath>

using namespace std;

void resP(int p, double &sum);

int main(){

    int p;
    double sum = 0;
    cout << "Enter a p number from 1 to 127: " << '\n';
    cin >> p;
    resP(p, sum);
    
    if(p <= 1 || p % 2 == 0){
        cout << "must be more what 1, and not debided by 2" << '\n';
        return 0;
    }
    
    cout << sum << '\n';

    return 0;
}

void resP(int p, double &sum){
    double resP1 = pow (2, p - 1);
    double resP2 = pow (2, p) - 1;
    sum = resP1 * resP2; 
}