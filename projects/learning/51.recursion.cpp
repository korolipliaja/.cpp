#include <iostream>
using namespace std;

/*
recursion - a programming technigue where a function
invokes itself from within
break a complex concept into a repeatable single step

(iterative vs recursive)

advantages - less code and is cleaner
useful for sorting and searching algorithms

disadvantages - uses more memory
slower
*/
int factorial(int num);
int factorialRecurcively(int num);
int main(){
    cout << factorial(10) << '\n';
    cout << factorialRecurcively(10) << '\n';
    
    return 0;
}
int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}
//same things 
int factorialRecurcively(int num){
    if(num > 1){
        return num * factorialRecurcively(num - 1);
    }
    else{
        return 1;
    }
}

