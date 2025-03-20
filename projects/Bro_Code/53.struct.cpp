#include <iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};


int main(){
    /*struct = A structure that group related variables under one name
    structs can contain many different data types (string,
    variables in a struct are known as "members"
    members can be access with . "Class Member Access Opera
    */

    student student1;
    student1.name = "Dima"; 
    student1.gpa = 5;
    student1.enrolled = true;

    student student2;
    student2.name = "Neo"; 
    student2.gpa = 4;
    student2.enrolled = false;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n' << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    return 0;
}