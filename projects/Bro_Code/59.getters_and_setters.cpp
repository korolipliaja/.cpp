#include <iostream>
using namespace std;

class Stove{
    private:
        int temperature = 0; // private  
    public:
        Stove(int temperature){
            setTemperature(temperature);
        }
        int getTemperature(){  // readable 
            return temperature;
        }
        void setTemperature(int temperature){   // writteble
            if(temperature < 0){
                this->temperature = 0;
            }
            else if(temperature >= 10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }
        }
};
int main(){
    Stove stove(10);
    //stove.temperature = 10000;
    //stove.setTemperature(10000);
    //stove.setTemperature(-10);

//    cout << "the stove temp is: " << stove.temperature << '\n'; 
    cout << "the stove temp is: " << stove.getTemperature() << '\n';
    return 0;
}