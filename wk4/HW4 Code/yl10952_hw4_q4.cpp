/*
Question 4:
Write two versions of a program that reads a sequence of positive integers from the user, 
calculates their geometric mean, and print the geometric mean. 
Notes: 
1. In mathematics, geometric mean of a dataset {a1, a2… , a3} containing positive 
numbers, is given by: '√a1 ∙ a2 ∙ a3 =
For example, the geometric mean of 2, 9 and 12 is equal to 6 ("'√2 ∙ 9 ∙ 12 = 6).
2. In	order	to	calculate	the	n-th	root	of	a	number,	you	should	call	the	pow function,	located	
in	the	cmath library.	
Your two versions should read the integer sequence in two ways: 
a) First read the length of the sequence.
For example, an execution would look like:
Please enter the length of the sequence: 3
Please enter your sequence: 
123
The geometric mean is: 1.8171
b) Keep reading the numbers until -1 is entered.
For example, an execution would look like:
Please enter a non-empty sequence of positive integers, each one in a separate line. End your 
sequence by typing -1:
123-1
The geometric mean is: 1.8171
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int seqLength, sequenceNum;
    float geometricMean, sequenceProduct;
    
    cout << "------------a) First read the length of the sequence.-------------"<<endl;
   
    //reads a sequence of positive integers from the user
    cout << "Please enter the length of the sequence:" << endl;
    cin >> seqLength;
    
    sequenceProduct = 1;//itialize it to 1.
    cout << "Please enter your sequence:" << endl;
    
    //calculates the product of user input int sequence
    for(int i=0; i<seqLength; i++){
        cin >> sequenceNum;
        sequenceProduct *= sequenceNum;
    }
    
    //calculates their geometric mean
    geometricMean = pow(sequenceProduct, (float)1/seqLength);
    
    //print the geometric mean.
    cout << fixed;
    cout.precision(4);
    cout << "The geometric mean is: " << geometricMean  << endl;
    
    cout<<endl;
    cout << "------------b) Keep reading the numbers until -1 is entered.-------------"<<endl;
    cout << "Please enter a non-empty sequence of positive integers, ";
    cout << "each one in a separate line. End your sequence by typing -1:"<< endl;
    
    seqLength = 0;
    sequenceProduct = 1;
    while (sequenceNum != -1){
        cin >> sequenceNum;
        sequenceProduct *= sequenceNum;
        seqLength += 1;
    }
    
    geometricMean = pow(sequenceProduct, (float)1/seqLength);
    
    cout << fixed;
    cout.precision(4);
    cout << "The geometric mean is: " << geometricMean  << endl;
    
    return 0;
}