#include <iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statment
    //condition ? expression_1 : expression_2;
    int grade = 17;
    int second = 10;
    bool hyngry = false;

    grade >= 18 ? std::cout << "you passed" << '\n' : std::cout << "you dont passed" << '\n';

    second % 2 == 1 ? std::cout << "ne deletsia na 2 " << '\n' : std::cout << "delitsia" << '\n';
    
    std::cout << (hyngry ? "yes" : "no") << '\n'; 


/*    if(grade >=18){   это как бы должно было выглядеть

        std::cout << "you will passed" << '\n';
    
    }
    else{
        std:: cout << "you dont pass" <<'\n';
    }

    return 0; */
}
