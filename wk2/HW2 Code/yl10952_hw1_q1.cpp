/*WRITE A PROGRAM THAT ASKS THE USER TO ENTER A NUMBER OF QUARTERS, 
DIMES, NICKELS AND PENNIES AND THEN OUTPUTS THE MONETARY VALUE 
OF THE COINS IN THE FORMAT OF DOLLARS  AND REMAINING CENTS. 
YOUR PROGRAM SHOULD INTERACT WITH THE USER EXACTLY AS IT SHOWS IN THE FOLLOWING 
EXAMPLE: PLEASE ENTER NUMBER OF COINS: 
# OF QUARTERS:13  
# OF DIMES: 4 
# OF NICKELS: 11 
# OF PENNIES: 17 
THE TOTAL IS 4 DOLLARS AND 37 CENTS*/

#include <iostream>
using namespace std;

int main(){
    int q;
    int d;
    int n;
    int p;
    int T;
    
    cout<<"Please enter number of coins: "<<endl;
    cout<<"of quarters:";
    cin>>q;
    cout<<"of dimes: "<<endl;
    cin>>d;
    cout<<"of nickels: "<<endl;
    cin>>n;
    cout<<"of pennies: "<<endl;
    cin>>p;
   
    
    T = 25*q + 10*d + 5*n + 1*p;
    
    cout<<"The total is "<< T / 100 <<" dollars and "<< T % 100 <<" cents."<<endl;
    
    return 0;
}