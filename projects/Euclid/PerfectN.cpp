#include <iostream>
#include <cmath>
using namespace std;

void resP(int p, double &sum);
void checkP3condition(int p, double &root, int &resRound, bool &isValid);

int main() {
    int p;
    double sum = 0;
    double root;
    int resRound;
    bool isValid;

    cout << "Enter a p number from 1 to 127: " << '\n';
    cin >> p;

    if (p <= 1 || p % 2 == 0) {
        cout << "p must be greater than 1 and not divisible by 2" << '\n';
        return 0;
    }

    checkP3condition(p, root, resRound, isValid);
    if (!isValid) {
        cout << "p does not satisfy the condition for its square root and divisors." << '\n';
        return 0;
    }

    resP(p, sum); 

    cout << "Square root: " << root << '\n';
    cout << "Rounded result: " << resRound << '\n';
    cout << "The result is: " << sum << '\n';

    return 0;
}

void resP(int p, double &sum) {
    double resP1 = pow(2, p - 1);
    double resP2 = pow(2, p) - 1;
    sum = resP1 * resP2;
}

void checkP3condition(int p, double &root, int &resRound, bool &isValid) {
    root = sqrt(p);
    resRound = floor(root);
    isValid = true;

    for (int i = 2; i <= root; ++i) {
        if (p % i == 0) {
            if (resRound % i != 0) {
                isValid = false;
                break;
            }
        }
    }
}