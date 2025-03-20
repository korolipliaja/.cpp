#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> cars = {"BMW", "Volvo", "Lexus", "Toyota", "Nissan"};
    cars.push_back("Tesla"); //add
    cars.push_back("VW");
    cars.push_back("Mitsubishi");
    cars.push_back("Mini");
    cars.pop_back(); //remove last element from vector


    for(string cars : cars){
        cout << cars << '\n';
    }
    cout << endl;
    
    cout << cars[0] << '\n';
    cout << cars[1] << '\n';

    cout << endl;

    cout << cars.front() << '\n';
    cout << cars.back() << '\n';

    cout << endl;

    cout << cars.at(2) << '\n';
    cout << cars.at(3) << '\n';

    cout << endl;

    cars[0] = "Opel";
    cout << cars[0] << '\n';

    cars.at(0) = "Opel";
    cout << cars.at(0) << '\n';
    
    cout << cars.size() << '\n';  

    cout << cars.empty();  // Outputs 1 (The vector is empty)

    cout << endl;

    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }
    cout << endl;

    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}