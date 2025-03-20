#include <iostream>

using namespace std;

void sortN(int numbers[], int size);
void simpleSort(int numbers[], int size);

int main(){

    int numbers[] = {5, 6, 11, 4, 7, 3, 8, 2, 9, 10, 1, 0};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sortN(numbers, size);
    cout << endl;
    simpleSort(numbers, size);
    cout << endl;

    for(int element : numbers){ 
        cout << element << " ";
    }
    cout << '\n';


    return 0;
}
//may be it will be useful in future, but can make is simply
void sortN(int numbers[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}


void simpleSort(int numbers[], int size){
    for(int i = 0; i < size; i++){
        cout << i << " ";
    }
}