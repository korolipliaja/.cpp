#include <iostream>

using namespace std;

void swap(string &x, string &y);
void swap2(string w, string z);

int main(){
    string x = "Kool-Aid";
    string y = "Water";
    
    string w = "cola";
    string z = "pepsi";

    swap(x,y);

    swap2(w,z);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    cout << "W: " << w << '\n';
    cout << "Z: " << z << '\n';

    return 0;
}
void swap(string &x, string &y){
    string temp; 

    temp = x;
    x = y;
    y = temp;
}


void swap2(string w, string z){
    string sugar; 

    sugar = w;
    w = z;
    z = sugar;
}