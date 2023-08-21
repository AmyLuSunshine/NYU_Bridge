/*Question	5:	
Write a program that asks the user to input a positive integer n, and prints a textual image of an 
hourglass made of 2n lines with asterisks. 
For example if n=4, the program should print:
*******
 *****
  ***
   *
   *
  ***
 *****
*******
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    char star = '*';
    char space = ' ';
    
    cout<<"Please input a positive integer n: "<<endl;
    cin>>n;
    
    for(int i=n; i>0; i--){
        for(int j=i; j<n; j++){
            cout<<space;
        }
        for(int j=0; j<2*i-1; j++){
            cout<<star;
        }
    cout<<endl;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<space;
        }
        for(int j=0; j<2*i-1; j++){
            cout<<star;
        }
    cout<<endl;
    }
    
    return 0;
}