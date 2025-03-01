#include <iostream>
using namespace std;

void printVerbs();

string baseForm[] = {"arise", "awake", "be", "bear"};
string pastSimple[] = {"arose", "awoke", "was/were", "bore"};
string pastParticiple[] = {"arisen", "awoken", "been", "born"};

int main() {

    printVerbs();

    return 0;
}

void printVerbs() {
    size_t size = sizeof(baseForm) / sizeof(baseForm[0]);

    for (size_t i = 0; i < size; i++) {
        string userPastSimple, userPastParticiple;
    
        cout << "enter irregular verbs for: " << baseForm[i] << '\n';
        cout << "past simple" << '\n'; 
        getline(cin, userPastSimple);
        cout << "past participle: " <<'\n';
        getline(cin, userPastParticiple);
        if(userPastSimple == pastSimple[i] && userPastParticiple == pastParticiple[i]){
            cout << "correct" << '\n';
        }
        else{
            cout << "wrong" << pastSimple << pastParticiple << '\n';
        }
    }
    
}
