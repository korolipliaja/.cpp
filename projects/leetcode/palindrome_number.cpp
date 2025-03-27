/*Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/


// % 10 даёт последнюю цифру числа.
// % 100 даёт две последние цифры.
// % 1000 даёт три последние цифры и т. д.
// % 2 можно использовать для проверки чётности (0 — чётное, 1 — нечётное).
// % x даёт остаток от деления на x, что полезно для проверок делимости.

 #include <iostream>
 using namespace std;
    int main(){

     int n, reversed_number = 0, remainder;
     cout << "Enter a number: " << '\n'; 
     cin >> n; 
     int originalNumber = n;
     while(n != 0){
         remainder = n % 10;
         reversed_number = reversed_number * 10 + remainder;
         n = n / 10;
     }
     cout << "your number is: " << reversed_number << '\n'; 
     if(reversed_number == originalNumber){
         cout << "your number is palindrome" << '\n';
     }
     else{
         cout << "number is not palindrome" << '\n';
     }
     return 0;
 }
