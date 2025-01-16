#include <iostream>

int main(){

    int students = 22;
    //students = students - 1;
    //students = students * 2;
    //students-=2;
    //students/=4;
 

    int s_group = students % 3;

    std::cout << s_group;    
    return 0;
}