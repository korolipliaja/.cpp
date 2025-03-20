#include <iostream>

using namespace std;

int searchAnArray(int numbers[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "Enter element for search: " << '\n';
    cin >> myNum;

    index = searchAnArray(numbers, size, myNum);

    if(index != -1){
        cout << myNum << "your index is: " << index << '\n';
    }
    else{
        cout << "your number is not in array" << '\n';
    }

    return 0;
}

int searchAnArray(int numbers[], int size, int element){

    for(int i = 0; i < size; i++){
            if(numbers[i] == element){
                return i;
            }
    }

    return -1;
}