#include <iostream>


int main() {

// Comment in one line

/*comment
in
more
lines
*/

// 1. Output text
   
    std::cout << "hi reddit!!!" << '\n';
    std::cout << "it was written on the line below of hi reddit" << '\n';

// 2. Variables and basic data types

    int x = 1;
    int y = 3;
    int sum = x + y;
    std::cout << x;
    std::cout << sum << '\n';

//2.1my example

    setlocale(LC_ALL, "RU");
    
    int cyear = 2024;
    int born = 2000;
    int my_age = cyear - born;
    
    std::cout << "Мой возраст - " << my_age << '\n';       

// 2.2 double number
    
    double price = 2.99;
    double cpu = 5.5;
    double temperature = 36.7;
    std::cout << price << '\n';
    
    std::cout << cpu << "mhz" << '\n';

// 2.3 single character
    
    char grade = 'A';
    char symbol = '&';

// 2.4 boolean (true or false)

    bool employer = true;
    bool power = false;
    std::cout << employer << '\n';
    std::cout << power << '\n';
// 2.5 string (represents a sequence of text)
    
    std::string mouse = "Loghitech g pro x superligh";
    std::cout << "i have this mouse " << mouse;
    std::cout << "his price " << price << '\n';

// 3. const, this is read only, can't be modified 
    const int my_gf_age_now = 21;
    const std::string my_phone = "Pixel 6 Pro";
    const std::string count_of_cameras = "(1.default,2.ultra wide,3.telephoto)";
    std::cout << my_phone;
    std::cout << " have 3 lens ";
    std::cout << count_of_cameras;
    
    return 0;
}

