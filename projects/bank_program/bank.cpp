#include <iostream>
#include <iomanip>

using namespace std;

void balanceATM(double balance);
double depozitATM();
double withrawATM(double balance);

int main(){

    int choise = 0;
    double balance = 101;

    

    do{
        cout << "bank accout\n"; 
        cout << "enter otions\n";
        cout << "1. check balance\n";
        cout << "2. depozit\n";
        cout << "3. withraw\n";
        cout << "4. exit\n";
        cin >> choise;    
        
        switch(choise){
            case 1: balanceATM(balance);
                break; 
            case 2: balance = balance + depozitATM();
                balanceATM(balance);
                break;
            case 3: balance = balance - withrawATM(balance);
                balanceATM(balance);
                break;
            case 4: cout << "see you soon\n";
                break;
            default: cout << "enter a # \n";
    }
    }while (choise != 4);
        
    return 0;
}

void balanceATM(double balance){
    cout << "your balance is: " << balance << '\n';
}
double depozitATM(){
    double amount = 0;
    cout << "how much depozit ?\n";
    cin >> amount;
    if(amount > 0){
        return amount;
    }
    else{
        cout << "enter a valid nubmer\n";
        return 0;
    }
}
double withrawATM(double balance){
    double amount = 0;
    cout << "how much withraw ? \n";
    cin >> amount;
    if(amount > balance){
        cout << "insufficient founds\n"; 
        return 0;
    }
    else if(amount < 0){
        cout << "enter a valid number\n";
        return 0;
    }
    else{
        return amount;
    }
}