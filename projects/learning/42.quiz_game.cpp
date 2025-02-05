#include <iostream>
using namespace std;


int main(){

    string questions[] = {
                        "1.Who is Ryan Golsing",
                        "2.What is baguette",
                        "3.How was made vodka",
                        "4.Red or Blue"
                        }; 

    string options[][4] = {
                            {"A. actor", "B. singer", "C. buissnes man", "D. meme creator"},
                            {"A. bred", "B. butter", "C. food", "D. name"},
                            {"A. in dream", "B. in Russia", "C. in basement", "D. I don't know"},
                            {"A. blue", "B. red", "C. yellow", "D. purple"}
                        };
    
    char answearKey[] = {'D', 'D', 'C', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    int score = 0;
    char guess;

    for(int i = 0; i < size; i++){
        cout << "************" << '\n';
        cout << questions[i] << '\n';
        cout << "************" << '\n';
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }
        cin >> guess;
        guess = toupper(guess);

        if(guess == answearKey[i]){
            cout << "Correct\n";
            score++;
        }
        else{
            cout << "Wrong\n";
            cout << "The answear is: " << answearKey << '\n';
        }
    }
    cout << "****RESULT*****" << '\n';
    cout << "correct" << score << '\n';
    cout << "# of questions" << size << '\n';
    cout << "SCORE: " << (score/(double)size)*100 << "%" << '\n';

    return 0;
}