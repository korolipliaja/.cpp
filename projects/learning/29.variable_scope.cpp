#include <iostream>

using namespace std; 

int myNum = 3;

void printNum(int myNum);

void printNum1();

int main(){

    int myNum = 2;
    cout << myNum << '\n';

    printNum(myNum);
    printNum1();

    return 0;
}

void printNum(int myNum){
}

void printNum1(){
    int myNum = 1;
    
    cout << ::myNum << '\n';

    cout << myNum << '\n';
}