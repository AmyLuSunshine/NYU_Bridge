/*
Question	6:
Write	a	program	that	asks	the user	to	input	a	positive	integer	n,	and	print	all	of	the	numbers	
from	1	to	n that	have	more	even	digits	than	odd	digits.
For	example,	if	n=30,	the	program	should	print:
2
4
6
8
20
22
24
26
28
*/

#include <iostream>
using namespace std;

//const int TEN = 10;
int main(){
    int n, oddCount, evenCount;
    int currDigit;
    
    cout << "Please input a positive integer: " << endl;
    cin >> n;
    
    // iterate through all the integers between 1 and n
    for(int i=1; i<=n; i++){
        //odd and even count set to 0 for each current integer i
        oddCount = 0;
        evenCount = 0;
        currDigit = i;//i need to be used to print out, so set currDigit = i
        
        //For each integer, we check each of its digits/bits is even or not
        while (currDigit > 0 ){  
            if(currDigit % 2 == 0 ){
                evenCount++;
            }    
            else{
                oddCount++;
            }
        //move to next bit forward
        currDigit /= 10; 
        }
        
        //print before move to next integer of i within n
        if(oddCount < evenCount)
            cout << i << endl;
    }    
    
    
    return 0;
}