/*
Question 2:
In this question we will use a simplified version of the Roman Numerals System to represent
positive integers.
The digits in this system are I, V, X, L, C, D and M. Each digit corresponds to a decimal value, as
showed in the following table:

Roman digit   I V  X  L  C  D    M
Decimal value 1 5 10 50 100 500 1000

A number in the simplified Roman numerals system is a sequence of Roman digits, which follow
these 2 rules:
1. The digits form a monotonically non-increasing sequence. That is the value of each digit is
less than or equal to the value of the digit that came before it.
For example, DLXXVI is a monotonically non-increasing sequence of Roman digits, but XIV is
not.
2. There is no limit on the number of times that ‘M’ can appear in the number.
‘D’, ‘L’ and ‘V’ can each appear at most one time in the number.
‘C’, ‘X’ and ‘I’ can each appear at most four times in the number.
For example: IIII, XVII and MMMMMMDCCLXXXXVII are legal numbers in our simplified Roman
numeral system, but IIIII, XIV, VVI and CCXLIII are not.
Write a program that reads from the user a (decimal) number, and prints it’s representation in
the simplified Roman numerals system.
Your program should interact with the user exactly as it shows in the following example:
Enter decimal number:
147
147 is CXXXXVII
*/


#include <iostream>
#include <string>
using namespace std;

const int upRoman = 500;
const int midRoman = 50;
const int lowRoman = 5;
int main(){
    int deciNum; 
    int remainNum = 0;
    int temp;
    string romanNum;

    char I = 'I';
    char V = 'V';
    char X = 'X';
    char L = 'L';
    char C = 'C';
    char D = 'D'; 
    char M = 'M';

    //reads from the user a decimal number
    cout << "Enter decimal number:" << endl;
    cin >> deciNum;
   
    //prints it’s representation in the simplified Roman numerals system
    //reset the remaining number everytime by minus the part from Thousands to tens.
    remainNum = deciNum;

    //print M D: div 500, group 2 temp print a M, 1 temp print a D
    temp = deciNum / upRoman;
    if(temp >= 1){
        remainNum -= upRoman*temp;
        int i = 0;
        for(int i=temp; i>=2; i-=2){
            romanNum += M;
            temp -= 2;
        }
        if( temp == 1 ){
            romanNum += D;
        } 
    } 

    //print C L: div 50, group 2 temp print a C, 1 temp print a L        
    temp = remainNum / midRoman;
    if(temp >= 1){
        remainNum -= midRoman*temp;
        int i=0;
        for(int i=temp; i>=2; i-=2){
            romanNum += C;
            temp -= 2;
        }
        //if(i ==  1  || temp == 1){
        if(temp == 1){
            romanNum += L;
        } 
    }

    //print X V: div 5, group 2 temp print a X, 1 temp print a V        
    temp = remainNum / lowRoman; 
    if(temp >= 1){
        remainNum -= lowRoman*temp;
        int i=0;
        for(int i=temp; i>=2; i-=2){
            romanNum += X;
            temp -= 2;
        }
       //if(i ==  1  || temp == 1){
        if(temp == 1){
            romanNum += V;
        }  
    }

    //print I: 1 temp print a I        
    temp = remainNum;
    if (temp >= 1){
        for(int i=temp; i>0; i--){
            romanNum += I;
        }
    }
           
    cout << deciNum << " is: " << romanNum  << endl;
    
    return 0;
}

/*
147
Enter decimal number:
147 is: CXXXXVII
*/