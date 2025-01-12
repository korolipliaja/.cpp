#include <iostream>
using namespace std;

int main() {
    int h = 7;

    // Upper part of the diamond
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = h - 2; i >= 0; i--) {
        for (int j = 0; j < h - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}