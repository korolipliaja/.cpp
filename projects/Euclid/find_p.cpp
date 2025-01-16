#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int p;
    cout << "enter a p from 1 to 127 : ";
    cin >> p;

    if (p <= 1 || p % 2 == 0) {
        cout << "p  << must be greater than 1 and not divisible by 2" << '\n';
        return 0;
    }

    double p1Result = pow(2, p - 1);
    double p2Result = pow(2, p) - 1;
    double times = p1Result * p2Result;

    cout << "result: " << times << '\n';

    return 0;
}