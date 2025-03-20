#include <iostream>
using namespace std;
template <typename T, typename U>
// T max(T x, T y){}
auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    cout << max(1, 2.1) << '\n';

    return 0;
}