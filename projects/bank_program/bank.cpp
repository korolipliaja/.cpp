#include <iostream>
#include <iomanip>

using namespace std;

void balanceATM(double balance);
double depozitATM();
double witdhrawATM(double balance); 


int main(){
    int choise = 0;
    double balance = 100.01; 

do{
    cout << "*********BANK PROGRAMM*********\n";
    cout << "*******ENTER YOUR CHOISE*******\n";
    cout << "1) SHOW BALANCE\n";
    cout << "2) DEPOZIT MONEY\n";
    cout << "3) WITHRAW MONEY\n";
    cout << "4) EXIT\n";
    cin >> choise;

    switch(choise){
        case 1: balanceATM(balance);
            break;
        case 2: balance = balance + depozitATM();
            balanceATM(balance);
            break;
        case 3: balance = balance - witdhrawATM(balance);
            balanceATM(balance);
            break;
        case 4: cout << "Thank you for viziting ))\n";
            break;
        default:cout << "Invalid choise!!!\n";
    }

}while(choise != 4);

    return 0;
}

void balanceATM(double balance){
    cout << "Your balance is: " << setprecision(2) << fixed << balance << endl;
}
double depozitATM(){
    double amount = 0;
    cout << "Enter the amout that you want do depozit\n";
    cin >> amount; 
    if(amount < 0){
        cout << "enter a pozitive number\n";
    }
    return amount;
}
double witdhrawATM(double balance){
    double amount = 0;
    cout << "Enter the amout that you want do withraw\n";
    cin >> amount;
    if(amount < balance){
        cout << "you are enought of money";
        return 0;
    }
    else if(amount < 0){
        cout << "that is not valid number\n";
    }
    else{
        return amount;
    }
    return amount; 
}