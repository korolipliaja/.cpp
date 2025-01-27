#include <iostream>
using namespace std;

double getTotal(double prices[], int size);

int main(){

    double prices[] = {2.99, 5.00, 99.99, 150.01};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << total << '\n';

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total = total + prices[i];
    }
    return total;
}