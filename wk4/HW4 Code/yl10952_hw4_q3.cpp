/*
Question 3:
Write a program that reads from the user a positive integer (in a decimal representation), and 
prints its binary (base 2) representation.
Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Enter decimal number:
76
The	binary	representation	of	76	is	1001100
Implementation Requirements:
1. You are supposed to implement the algorithm that converts to base 2. You should not use 
any string or special cout functionalities to make the conversion. 
2. You are not allowed to use arrays.
*/

#include <iostream>
#include <string>
using namespace std;

const int TEN = 10;
int main(){
    int deciInput;
    int binaOutput = 0;
    int remain;
    
    cout << "-----------------Numeric-Non-String Method-------------------" <<endl;
    cout << "Enter decimal number:" << endl;
    cin >> deciInput;
    
    //deciInput = 6;
    int count = 0;
    for(int i=deciInput; i >0; i /=2 ){
       
        if(count == 1){
            remain *= 1;
        }
        
        remain = i % 2;
        if(remain == 1){
            for(int j=0; j<count; j++){
                remain *= TEN;
            }
            count += 1;
        }
        else{
            count += 1;
        }
        binaOutput = remain + binaOutput;
    }
    
    cout << "The binary representation of " << deciInput << " is: " <<binaOutput << endl;
    cout << endl;
    
    cout << "-----------------string Method-------------------" <<endl;
    string binaStringOutput;
    
    cout << "Enter decimal number:" << endl;
    cin >> deciInput;
    
    for(int i=deciInput; i >0; i /=2 ){
        remain = i % 2;
        binaStringOutput = to_string(remain) + binaStringOutput;
    }    
    cout << "The binary representation of " << deciInput << " is: " <<binaStringOutput << endl;
    
    return 0;
}

/*
Enter decimal number:
6
The binary representation of 6 is: 110

-----------------Numeric-Non-String Method-------------------
Enter decimal number:
76
The binary representation of 76 is: 1001100

-----------------string Method-------------------
Enter decimal number:
76
The binary representation of 76 is: 1001100

** Process exited - Return Code: 0 **
*/