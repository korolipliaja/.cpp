#include <iostream>

int main(){

   char unit;
   double speed;
   
   std::cout << "*****Speed_convertor*****" << '\n';
   std::cout << "Enter value 'K' for km/h, or 'M' for mph/h: " << '\n';
   std::cin >> unit && speed;
   std::cout << "Enter speed" << '\n';

   if(unit == 'K' || unit == 'k'){
      
      speed = (speed * 0.621371);
      std::cout << speed << '\n';
   }   
   else if(unit == 'M' || unit == 'm'){
      speed = (speed / 0.621371);
      std::cout << speed << '\n';
   }
   else{
      std::cout << "enter only in 'K' or 'M' !!!" << '\n';
   }

   return 0;
}