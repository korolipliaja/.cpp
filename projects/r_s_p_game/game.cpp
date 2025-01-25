#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showWinner(char player, char computer);

int main() {
    cout << "Rock, Paper, Scissors Game!\n";
    cout << "***************************\n";
    char player = getUserChoice();
    char computer = getComputerChoice();

    showWinner(player, computer);

    return 0;
}

char getUserChoice() {
    char player;

    do {
        cout << "Enter 'r' for rock\n";
        cout << "Enter 'p' for paper\n";
        cout << "Enter 's' for scissors\n";
        cin >> player;

        switch (player) {
            case 'r':
                cout << "You chose rock!\n";
                break;
            case 'p':
                cout << "You chose paper!\n";
                break;
            case 's':
                cout << "You chose scissors!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {
    srand(time(NULL));
    int num = rand() % 3;
    char computer;

    switch (num) {
        case 0:
            computer = 'r';
            cout << "Computer chose rock!\n";
            break;
        case 1:
            computer = 'p';
            cout << "Computer chose paper!\n";
            break;
        case 2:
            computer = 's';
            cout << "Computer chose scissors!\n";
            break;
    }

    return computer;
}

void showWinner(char player, char computer) {
    if (player == computer) {
        cout << "It's a tie!\n";
    } else if ((player == 'r' && computer == 's') || 
               (player == 'p' && computer == 'r') || 
               (player == 's' && computer == 'p')) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
}

