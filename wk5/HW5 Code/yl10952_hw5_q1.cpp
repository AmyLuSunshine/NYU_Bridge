/******************************************************************************
Question 1:
Write a program that reads a positive integer n from the user and prints out a nxn
multiplication table. The columns should be spaced by a tab.
Your program should interact with the user exactly as it shows in the following example:
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int n;
    char space = '\t';
    
    //reads a positive integer n from the user
    cout << "Please enter a positive integer: ";
    cin >> n;
    
    //prints out a nxn multiplication table.
    for(int i=1; i<=n; i++){
        for(int j=i; j<=i*n; j+=i){
            cout<<j<<space;
        }
        cout<<endl;
    }
    
    
    
    return 0;
}

/*
Please enter a positive integer: 3
1	2	3	
2	4	6	
3	6	9	
*/
