#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        double gpa;
        int age;
    Student(string name, double gpa, int age){
        this->name = name;
        this->gpa = gpa;
        this->age= age;
    }
};

int main(){

    Student student1("Dima Golub", 5.0, 25);
    Student student2("Andreea Revenco", 4.3, 22);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';

    return 0;
}