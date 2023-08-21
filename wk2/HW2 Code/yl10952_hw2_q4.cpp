/*Question 4: 
Write a program that reads from the user two positive integers, and prints the result of when we add, subtract, multiply, divide, div and mod them. 
Your program should interact with the user exactly as it shows in the following example: Please enter two positive integers, separated by a space: 
14 4 
14 + 4 = 18 
14 – 4 = 10 
14 * 4 = 56 
14 / 4 = 3.5 
14 div 4 = 3 
14 mod 4 = 2 
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    
    int add;
    int sub; 
    int mult;
    double divide;
    int div;
    int mod; 
    
    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>> x >> y;
    
    add = x + y;
    sub = x - y;
    mult = x * y;
    divide = (double) x/y;
    //casting :The syntax is the new type is included in parentheses. （）
    div = x / y;
    mod = x % y;
    
    cout<< x << " + " << y <<" = "<<add <<endl;
    cout<< x << " - " << y <<" = "<< sub<<endl;
    cout<< x << " * " << y <<" = "<< mult<<endl;
    cout<< x << " / " << y <<" = "<< divide<<endl;
    cout<< x << " div " << y <<" = "<< div<<endl;
    cout<< x << " mod " << y <<" = "<< mod<<endl;
    
    return 0;
}