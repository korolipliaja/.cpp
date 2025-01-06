#include <iostream>    //using namespace std; /*can be what*/
    
    using std::string;
    using std::cout; 

    namespace first{
    int x = 9;
}
    namespace second{
    int x = 8;

}
    namespace vpn_off{
        string ip = "46.131.83.91 vpn enable";
    }
    namespace vpn_on{
        string ip = "185.112.82.235 vpn disable";
    }
 
/*here dont need to write everytime std::*/  
int main(){
    
    


    cout << first::x << '\n';
    cout << second::x << '\n';

    cout << vpn_off::ip << '\n';
    cout << vpn_on::ip;
    

    return 0;
}